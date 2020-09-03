#include <bits/stdc++.h>
using namespace std;
int vis[200001];
vector<int>ar[200001];
vector<int>v;
int deg[200001];
void dfs(int node)
{
	vis[node]=1;
	v.push_back(node);
	for(int u:ar[node])
	{
		if(vis[u]==0)
		dfs(u);
	}
}
int main() 
{
	int n,m;
    cin>>n>>m;
while(m--)
{
	int x,y;
	cin>>x>>y;
	ar[x].push_back(y);
	ar[y].push_back(x);
	++deg[x];
	++deg[y];
}
int ans=0;
for(int i=1;i<=n;i++)
{
	if(vis[i]==0)
	{
		v.clear();
		dfs(i);
		bool c=true;
		for(auto q:v)
		c=c&deg[q]==2;
		if(c)ans++;
	}
}
cout<<ans<<endl;
	return 0;
}
