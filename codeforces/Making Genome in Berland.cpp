#include <bits/stdc++.h>
using namespace std;
vector<int>adj[101];
int vis[101];
void dfs(int node)
{
	vis[node]=2;
	cout<<char('a'+node);
	for(int u:adj[node])
	{
		if(vis[u]!=2)
		dfs(u);
	}
}
int main()
{
	int n;
	cin>>n;
	string s;
	while(n--)
	{
		cin>>s;
		for(int i=1;i<s.length();i++)
		{
			vis[s[i]-'a']=1;
			adj[s[i-1]-'a'].push_back(s[i]-'a');
		}
		if(!vis[s[0]-'a'])vis[s[0]-'a']=-1;
	}
	for(int i=0;i<26;i++)
	{
		if(vis[i]==-1)
		dfs(i);
	}
	return 0;
}
