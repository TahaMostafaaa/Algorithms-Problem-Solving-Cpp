string s;
vector<int> str;
void print_comb(){

    for (int i =0; i < s.size(); i++){
            printf("%d ",str[i]);
    }
        printf("\n");     
}
void print_string()
{
	 for (int i =0; i < s.size(); i++){
            if(str[i])printf("%c",s[i]);
    }
        printf("\n");  
}
void comb(int index)
{
	if(index == s.size())
	{
		print_string();
		return;
	}
	str[index] = 1;
	comb(index+1);
	str[index] = 0;
	comb(index+1);
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input_here.in", "rt", stdin);
#endif
// -------- combinations rec -----------
cin >> s;
str.resize(s.size());
comb(0);
// -------- combinations bitmask --------
for (int i = 0; i < (1<<s.size()); i++)
	{
		for (int j = 0; j < s.size(); j++)
		if(i&(1<<j))cout << s[j];
		cout << endl;
	}
}