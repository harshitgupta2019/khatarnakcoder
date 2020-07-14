#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>ar[100001];
int vis[100001];
int arr[100001];
int f;
void dfs(int node)
{
	vis[node]=1;
	for(pair<int,int>edge:ar[node])
	{
		if(vis[edge.first]==0)
		{
			if(arr[node]==-1)
			arr[node]=0;
			arr[edge.first]=abs(edge.second-arr[node]);
		}
		else
		{
			if(arr[edge.first]!=abs(edge.second-arr[node]))
			f=1;
		}
	}
}
int main() 
{
	int t,n,m,i;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(i=1;i<=n;i++)
		ar[i].clear(),vis[i]=0,arr[i]=-1;
		f=0;
		while(m--)
		{
			int u,v,w;
			cin>>u>>v>>w;
			if(u==v)
			{
				if(w!=0)
				f=1;
				continue;
			}
			ar[u].push_back({v,w});
			ar[v].push_back({u,w});
		}
		for(i=1;i<=n;i++)
		{
			if(vis[i]==0)
			dfs(i);
			if(f==1)
			break;
		}
		if(f==1)
		cout<<"no"<<endl;
		else
		cout<<"yes"<<endl;
	}
	return 0;
}
