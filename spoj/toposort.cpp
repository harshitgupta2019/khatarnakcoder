#include <bits/stdc++.h>
using namespace std;
vector<int>res;
vector<int>ar[10001];
int in[10001];
bool kahn(int n)
{
	priority_queue<int,vector<int>,greater<int>>q;
	for(int i=1;i<=n;i++)
	{
		if(in[i]==0)
		q.push(i);
	}
	while(!q.empty())
	{
		int cur=q.top();
		res.push_back(cur);
		q.pop();
		for(int i:ar[cur])
		{
			in[i]--;
			if(in[i]==0)
			q.push(i);
		}
	}
	return res.size()==n;
}
int main() {
	int n,m,i,x,y;
	cin>>n>>m;
	for(i=1;i<=m;i++)
	{
		cin>>x>>y;
		ar[x].push_back(y);
		in[y]++;
	}
	if(kahn(n)!=1)
	cout<<"Sandro fails.";
	else
	for(int node:res)
	cout<<node<<" ";
	return 0;
}
