int n;
vi v;
int target;
int memo[MAX][MAX];
bool is_sum(int index,int sum)
{
	if(index == n)
		return target == sum;
	if(memo[index][sum] != -1)
		return memo[index][sum];
	return memo[index][sum] = is_sum(index+1,sum) || is_sum(index+1,sum+v[index]);
}
int main() {
cin_int(n);
cin_int(target);
v.resize(n);
memset(memo,-1,sizeof memo);
for (int i = 0; i < n; i++)
	cin_int(v[i]);
cout << is_sum(0,0) << endl;
}