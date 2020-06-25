#include <bits/stdc++.h>
using namespace std;
vector<int>ar[2001];
int vis[2001],col[2001];
bool dfs(int node,int c)
{
	vis[node]=1;
	col[node]=c;
	for(int i:ar[node])
	{
		if(vis[i]==0)
		{
			 if(dfs(i,c^1)==false)
			return false;
		}
		else if(col[node]==col[i])
		return false;
	}
	return true;
}
int main() {
	int t,n,m,i,a,b,i1;
	cin>>t;
	for(i1=1;i1<=t;i1++)
	{
		cin>>n>>m;
	
		for(i=1;i<=n;i++)
		ar[i].clear(),vis[i]=0;
		for(i=1;i<=m;i++)
		{
			cin>>a>>b,
			ar[a].push_back(b),
			ar[b].push_back(a);
			
		}
			bool f=true;
		for(i=1;i<=n;i++)
		{
			if(vis[i]==0)
			{
				if(dfs(i,0)==false)
				f=false;
			}
		}
		cout<<"Scenario #"<<i1<<":"<<endl;
		if(f==false)
		cout<<"Suspicious bugs found!"<<endl;
		else
		cout<<"No suspicious bugs found!"<<endl;
		
	}
	return 0;
}
