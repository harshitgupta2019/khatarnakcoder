#include <bits/stdc++.h>
using namespace std;
vector<int>ar[10001];
int vis[10001];
void dfs(int node)
{
	vis[node]=1;
	for(int i:ar[node])
	{
		if(vis[i]==0)
		dfs(i);
	}
}
int main() {
	int n,m,a,b;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>a>>b;
		ar[a].push_back(b);
		ar[b].push_back(a);
		
	}
	int c=0;
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0)
		dfs(i),c++;
	}
	if(c==1&&m==n-1)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
