// ============================================================================
// Name        : Test.cpp
// Author      : Taha Mostafa
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
// ============================================================================

#include <bits/stdc++.h>

using namespace std;

#define all(v)              ((v).begin()), ((v).end())
#define sz(v)               ((int)((v).size()))
#define cin_int(x)			scanf("%d",&x)
#define cin_char(x)			scanf("%c",&x)
#define cout_int(x)			printf("%d",x)
#define cout_int_ln(x)		printf("%d\n",x)
#define cout_char(x)		printf("%c",x)
#define cout_char_ln(x)		printf("%c\n",x)
#define clr(v, d)           memset(v, d, sizeof(v))
#define rep(i, v)       for(int i=0;i<sz(v);++i)
#define lp(i, n)        for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)    for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)    for(int i=(j);i>=(int)(n);--i)
 
typedef long long         ll;
const ll OO = 1e8;
 
const double EPS = (1e-7);
int dcmp(double x, double y) {  return fabs(x-y) <= EPS ? 0 : x < y ? -1 : 1; }
 
#define pb                  push_back
#define MP                  make_pair
#define P(x)                cout<<#x<<" = { "<<x<<" }\n"
#define PI acos(-1)
typedef long double       ld;
typedef vector<int>       vi;
typedef vector<double>    vd;
typedef vector< vi >      vvi;
typedef vector< vd >      vvd;
typedef vector<string>    vs;

vector<int> v = {5,4,3,2,1};

int LIS(int i, int prev)
{
	if(i == v.size())
		return 0;
	int choice1 = LIS(i+1,prev);
	int choice2 = 0;
	if(prev == v.size() || v[prev] <= v[i])
		choice2 = LIS(i+1,i)+1;
	return max(choice2,choice1);
}
int main() {

	#ifndef ONLINE_JUDGE
	freopen("input_here.in", "rt", stdin);
	// freopen("output_here.out", "wt", stdout);
	#endif

	cout << LIS(0,v.size()) << endl;
	

return 0;
}
