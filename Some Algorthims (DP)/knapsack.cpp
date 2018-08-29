const int MAX = 151;
int wt[MAX];
int val[MAX];
int n;
int knapsack(int w,int n)
{
	if(n == 0 || w == 0)
		return 0;
	if(wt[n-1] > w)
		return knapsack(w,n-1);
	return max(val[n-1]+knapsack(w-wt[n-1],n-1),knapsack(w,n-1));
}
int main() {
//---------- knapsack rec ------------
int w;
cin >> n;
cin >> w;
for (int i = 0; i < n; ++i)
cin_int(val[i]);
for (int i = 0; i < n; ++i)
cin_int(wt[i]);
cout_int_ln(knapsack(w,n));
//------------ knapsack bitmask -----------
int mx(0);
int cot;
	int weight;
for (int i = 0; i < (1<<n); i++)
{ cot=0;
	weight=0;
	for (int j = 0; j < n; j++)
{
	if(i&(1<<j))
		cot+=val[j],weight+=wt[j];
}
if(weight<=w)
mx = max(mx,cot);
}
cout << mx << endl;
