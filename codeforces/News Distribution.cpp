#include <bits/stdc++.h>
using namespace std;
int vis[500005];
vector<int>adj[500005];
void bfs(int u)
{
	vector<int> v;
	int cnt = 0;
	queue<int>q;
	vis[u]=1;
	q.push(u);
	while(!q.empty())
	{
		int c=q.front();
		q.pop();
		v.push_back(c);
		cnt++;
		for(int x:adj[c])
		{
			if(!vis[x])
			{
				q.push(x);
				vis[x]=1;
			}
		}
	}
	for(int i=0;i<cnt;i++)
	{
		vis[v[i]] = cnt;
	}
}
int main() {
	int n,m,i,j;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	vis[i]=0;
	while(m--)
	{
	  	int k;
	  	cin>>k;
	  	if(k==0)continue;
	  	if(k==1)cin>>k;
	  	else
	  	{
	  		int a,b;
	  		cin>>a;
	  		for(i=1;i<k;i++)
	  		{
	  			cin>>b;
	  			adj[a].push_back(b);
	  			adj[b].push_back(a);
	  		}
	  		
	  	}
	}
	for(i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			bfs(i);
		}
		cout<<vis[i]<<" ";
	}
	return 0;
}
