#include<bits/stdc++.h>                                                                          
#define pb(a)            push_back(a)
using namespace std;
typedef pair<int,int> pairs;
vector<pairs> ar[100007];
int a[100007];
int dis[100007];
int vis[100007]={0};
int ans=1000009;


void dijkstra(int as )
{
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	pq.push({0,as});
	dis[as]=0;
	while(!pq.empty())
	{
		int u=pq.top().second;
		pq.pop();
		if(dis[u]>ans)
		return;
		for(pair<int,int>edge:ar[u])
		{
			if(dis[u]+edge.second<dis[edge.first]||dis[edge.first]==-1)
			{
				dis[edge.first]=dis[u]+edge.second;
				if(dis[edge.first]<ans&&vis[edge.first]==1)
				ans=dis[edge.first];
				pq.push({dis[edge.first],edge.first});
			}
		}
	}
}


int main()
{
   int n,m,k;
   cin>>n>>m>>k;
for(int i=0;i<k;i++)
{
cin>>a[i];
vis[a[i]]=1;
}
for(int i=0;i<m;i++)
{
       int u,v,w;
       cin>>u>>v>>w;
ar[u].push_back({v,w});
ar[v].push_back({u,w});
}
    memset(dis,-1,sizeof(dis));
    for(int i=0;i<k;i++)
    {
    	dijkstra(a[i]);
    }
    
    
    cout<<ans<<endl;

}
