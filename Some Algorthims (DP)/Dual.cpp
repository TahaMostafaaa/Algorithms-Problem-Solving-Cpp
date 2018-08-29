const int MAX = 151;
string base(int n,int b)
{
	string ret,s = "0123456789ABCDEFGHIJKLMNOQRS";
	while(n) {
	    ret = s[n&b] + ret;
	    n/=b;
	}
	return ret;
}
bool pal(string s)
{
	string tmp = s;
	reverse(tmp.begin(),tmp.end());
	return tmp==s;
}
int main() {
int n,s,c;
cin >> n >> s;

for (s++; n; s++){
	for (int i = 2,c=0; i <=10&&c<2; i++)
	c+= pal(base(s,i));
	if(c>=2)
	{
		cout << s << endl;
		n--;
	}

}