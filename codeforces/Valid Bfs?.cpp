#include<bits/stdc++.h>
using namespace std;
#define pb push_back
vector<int> ans,adj[200007];
bool vis[200007];
int input[200007],r[200007];	
bool cmp(int a,int b)
{
	return r[a]<r[b];
}
int main()
{	
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n,x,a,b,i,j;
	cin>>n;
	for(i=0;i<n-1;i++)
	{	
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	for(i=0;i<n;i++){
		cin>>input[i];
		r[input[i]]=i;
	}	
	for(i=1;i<=n;i++)
	sort(adj[i].begin(),adj[i].end(),cmp);
	queue<int> q;		
	q.push(1);	
	memset(vis,false,sizeof(vis));
		while(!q.empty())
		{
			int x= q.front();
			q.pop();
			ans.pb(x);
			vis[x]=true;
			for(int j:adj[x])
				if(vis[j]==false)
					q.push(j);
			}
		
	for(i=0;i<n;i++)
		if(input[i]!=ans[i])
		{
			cout<<"No"; 
			return 0;
			
		}
	cout<<"Yes";		
		
    return 0;
}
