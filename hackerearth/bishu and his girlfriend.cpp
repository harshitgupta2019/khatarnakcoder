#include <bits/stdc++.h>
using namespace std;
int vis[1001],dis[1001];
vector<int>ar[1001];
void dfs(int node,int d)
{
    vis[node]=1;
	dis[node]=d;
	for(int i:ar[node])
	{
       if(vis[i]==0)
	   dfs(i,dis[node]+1);
	}
}
int main()
 {
	 int n , q , a , b,i  ;
	 cin>>n;
	 for(i=1;i<=n-1;i++)
	 cin>>a>>b , ar[a].push_back(b)  , ar[b].push_back(a);
	 dfs(1,0);
	 cin>>q;
	 int ans=-1,md=1000000;
	 while(q--)
	 {
		 int p;
		 cin>>p;
		 if(dis[p]<md)
		 md=dis[p],ans=p;
		 else if(dis[p]==md&&p<ans)
		 ans=p;

	 }
	 cout<<ans;

	}


