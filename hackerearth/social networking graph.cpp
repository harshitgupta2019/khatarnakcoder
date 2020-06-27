#include <bits/stdc++.h>
using namespace std;
int vis[1000001],dis[1000001],level[1000001];
vector<int>ar[1000001];
void bfs(int node)
{
   queue<int>q;
   q.push(node);
   vis[node]=1;
   dis[node]=0;
   while(!q.empty())
   {
	   int cur=q.front();
	   q.pop();
	   for(int i:ar[cur])
	   {
		   if(vis[i]==0)
		   {
              		   q.push(i);
		   dis[i]=dis[cur]+1;
		   vis[i]=1;
		   level[dis[i]]++;
		   }
	   }
   }
}

int main()
 {
	int n,m,q,src,d,a,b,i;
	cin >>n>>m;	
	for( i=1;i<=m;i++)
	cin>>a>>b,ar[a].push_back(b),ar[b].push_back(a);
	cin>>q;
	while(q--)
	{
          cin>>src>>d;
		  for(i=0;i<=n;i++)  level[i]=0,vis[i]=0;
		  bfs(src);
		  cout<<level[d]<<endl;
	}
}									
	


