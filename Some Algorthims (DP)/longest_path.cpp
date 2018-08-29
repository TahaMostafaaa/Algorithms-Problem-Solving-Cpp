const int MAX = 101;
int maze[MAX][MAX];
int n;
bool valid(int i,int j)
{
	return (i >= 0 && j >= 0 && i < n && j < n);
}
int find_max(int i,int j)
{
	if(!valid(i,j))
		return INT_MIN;
	if(i == n-1 && j == n-1)
		return maze[i][j];
	return maze[i][j] + max(find_max(i,j+1),find_max(i+1,j));
}
int main() {

cin_int(n);
for (int i = 0; i < n; i++)
	for (int j = 0; j < n; j++)
		cin >> maze[i][j];
cout << find_max(0,0) << endl;
}