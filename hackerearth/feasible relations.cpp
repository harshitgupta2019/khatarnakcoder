#include<bits/stdc++.h>
using namespace std;
vector<int>ar[1000001];
int vis[1000001],cc[1000001];
int cu_cc;
void dfs(int node)
{
	vis[node]=1;
	cc[node]=cu_cc;
	for(int i:ar[node])
	{
		if(vis[i]==0)
		dfs(i);
	}
}
int main()
{
	int t,n,k,i;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		string s;
		vector<pair<int,int>>p;         //edge list
		int a,b;
		cu_cc=0;
		for(i=1;i<=n;i++) ar[i].clear(),vis[i]=0;
		for(i=1;i<=k;i++)
		{
			cin>>a>>s>>b;
			if(s=="=")  ar[a].push_back(b),ar[b].push_back(a);
			else
			{
				p.push_back({a,b});
			}
		}
		for(i=1;i<=n;i++)
		{
           if(vis[i]==0)
		   {
               cu_cc++;
			   dfs(i);
		   }
		}
		bool f=true;
		for(i=0;i<p.size();i++)
		{
			a=p[i].first;
			b=p[i].second;
			if(cc[a]==cc[b])
			{
				f=false;
				break;
			}
		}
		if(f)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;

	}
}
