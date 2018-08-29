int n;
int currency;
vi v;
int memo[101][15001];
int dp[10001];
int solve(int index,int sum)
{
	if(index == n)
		return (sum == currency);
	int cot=0;
	if(memo[index][sum] != -1)
		return memo[index][sum];
	for (int i = 0; v[index]*i+sum <= currency; i++)
		memo[index][sum] = cot += solve(index+1,v[index]*i+sum);
 return cot;
}
int main() {
//---------------- Money System Rec & Memo --------------
cin_int(n);
cin_int(currency);
v.resize(n);
memset(memo,-1,sizeof memo);

for (int i = 0; i < n; ++i)
	cin_int(v[i]);
cout << solve(0,0) << endl;
//-------------- Money System DP --------------
cin_int(n);-----------------
memset(dp,0,sizeof dp);
dp[0]=1;
for (int i = 0; i < n; i++)
	for (int j = v[i]; j <= currency; j++)
		dp[j] += dp[j - v[i]];
cout_int_ln(dp[currency]);
}