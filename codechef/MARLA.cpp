#include <bits/stdc++.h>
using namespace std;
long long int a[1001][1001];
bool vis[1001][1001];
int c,n,m;
bool isvalid(int x,int y,int p)
{
	if(x<0||x>n||y<0||y>m||vis[x][y]==true||a[x][y]!=p)
	return false;
	return true;
}
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
void dfs(int x,int y)
{
	vis[x][y]=1;
	c++;
	for (int i = 0; i < 4; i++)
    {
        int xx = x + dx[i], yy = y + dy[i];
        if(isvalid(xx, yy, a[x][y])){
            dfs(xx, yy);
        }
    } 
}

int main() {
	int i,j;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	int val=1e9+1;
	int ans=-1*val;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(vis[i][j]==0)
			{
				c=0;
				dfs(i,j);
				if(c>ans)
				ans=c,	val=a[i][j];
				else if(c==ans&&val>a[i][j])
				val=a[i][j];
			}
		}
	}
	cout<<val<<" "<<ans<<endl;
	return 0;
}
