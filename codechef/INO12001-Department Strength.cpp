#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>ar[100001];
ll level[100001],vis[100001];
ll mi=100001,ma=0,sum=0,c=0;
void dfs_count(ll node)
{
	vis[node]=1;
	mi=min(mi,node);
	ma=max(ma,node);
	c++;
	for(int i:ar[node])
	{
		if(vis[i]==0)
		dfs_count(i);
	}
	vis[node]=0;
}
void dfs_level(ll node,ll level)
{
	sum+=level;
	vis[node]=1;
	for(int i:ar[node])
	{
		if(vis[i]==0)
		dfs_level(i,level+1);
	}
}
int main()
{
	ll t,n,m,x,y;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll even=0,odd=0,i;
			for(i=1;i<=n;i++)
		{
			vis[i]=0,ar[i].clear();
		}
		
		while(m--)
		{
			cin>>x>>y;
			ar[x].push_back(y);
			ar[y].push_back(x);
		}
	
		for(i=1;i<=n;i++)
		{
			if(vis[i]==0)
			{
				c=0;mi=10000000;ma=0;sum=0;
				dfs_count(i);
				if(c%2!=0)
				{
					dfs_level(ma,1);
					odd+=sum;
				}
				else
				{
					dfs_level(mi,1);
					even+=sum;
				}
			}
		}
		cout<<even<<" "<<odd<<endl;
	}
	return 0;
}
