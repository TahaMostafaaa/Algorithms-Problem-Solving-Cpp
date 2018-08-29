
int lcs_substring(int idx1,int idx2, bool check)
{
	memset(memo,-1,sizeof memo);
	if(memo[idx1][idx2] != -1)
		return memo[idx1][idx2];
	if(idx1 == s1.size() || idx2 == s2.size())
		return memo[idx1][idx2] = 0;
	if(check)
	{
		if(s1[idx1] == s2[idx2])
			return memo[idx1][idx2] = 1 + lcs_substring(idx1+1,idx2+1,true);
		 return memo[idx1][idx2] = 0;
	}
	int r=0;
	if(s1[idx1] == s2[idx2])
		r =  1 + lcs_substring(idx1+1,idx2+1,true);
	return memo[idx1][idx2] = max(r,max(lcs_substring(idx1+1,idx2,false),lcs_substring(idx1,idx2+1,false)));


}
int lcs_substring_dynamic()
{
	memset(memo,0,sizeof memo);
	int mx =0;
	for (int i = 1; i <= s1.size(); ++i)
		for (int j = 1; j <= s2.size(); ++j)
		{
			if(s1[i-1] == s2[j-1])
				memo[i][j] = memo[i-1][j-1] + 1;
			else
				memo[i][j] = 0;
			if(memo[i][j] > mx)
				mx = memo[i][j];
		}
		return mx;

}
int main() {
	#ifndef ONLINE_JUDGE
	freopen("input_here.in", "rt", stdin);
	#endif


cin >> s1 >> s2;
cout << lcs_substring_dynamic() << endl;


return 0;
}