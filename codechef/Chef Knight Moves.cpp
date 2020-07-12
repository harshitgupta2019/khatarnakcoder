#include <bits/stdc++.h>
using namespace std;
int dx[]={-2,-1,1,2,2,1,-1,-2};
int dy[]={1,2,2,1,-1,-2,-2,-1};
int vis[10][10],dis[10][10];
int tar_x,tar_y;
bool isvalid(int x,int y)
{
	if(x<1||x>8||y<1||y>8)return false;
	if(vis[x][y]==1)return false;
	return true;
}
int bfs(int x,int y)
{
	queue<pair<int,int>>q;
	dis[x][y]=0;
	vis[x][y]=1;
	q.push({x,y});
	if(x==tar_x&&y==tar_y)
	return dis[x][y];
	while(!q.empty())
	{
		int curx=q.front().first;
		int cury=q.front().second;
		q.pop();
		for(int i=0;i<8;i++)
		{
			if(isvalid(curx+dx[i],cury+dy[i]))
			{
				x=curx+dx[i];
				y=cury+dy[i];
				dis[x][y]=dis[curx][cury]+1;
				vis[x][y]=1;
				q.push({x,y});
				if(x==tar_x&&y==tar_y)return dis[x][y];
			}
		}
	}
}
int main() {
	int t,i,j;
	cin>>t;
	while(t--)
	{
		int x,y;
	char a,b;
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=8;j++)
	vis[i][j]=0;
	}
	cin>>a>>b;
	x=a-'a'+1;
	y=b-'0';
	cin>>a>>b;
	tar_x=a-'a'+1;
	tar_y=b-'0';
	cout<<bfs(x,y)<<endl;
	}
	return 0;
}
