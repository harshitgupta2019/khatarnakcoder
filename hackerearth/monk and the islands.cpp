#include <bits/stdc++.h>
using namespace std;
int vis[10001],dis[10001];
vector<int>ar[10001];
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
		   }
	   }
   }
}
int main() {
	int t,n,m,a,b,i;
	cin >>t;
	while(t--)
	{
     cin>>n>>m;  
	 for(i=1;i<=n;i++)  ar[i].clear(),vis[i]=0;
	 for(i=1;i<=m;i++)
	 {
		 cin>>a>>b;
		 ar[a].push_back(b);
		 ar[b].push_back(a);
	 } 
	 bfs(1);
	 cout<<dis[n]<<endl;  
	}			
	}

