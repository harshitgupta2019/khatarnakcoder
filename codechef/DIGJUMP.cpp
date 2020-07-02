#include <bits/stdc++.h>
using namespace std;

int N=1e5+9;
int main() {
	string s;
	cin>>s;
	vector<int>ar[100001];
	int n=s.length(),i;
	for(i=0;i<n;i++)
	{
		ar[s[i]].push_back(i);
	}
	vector<int>dis(n+1,N),vis(n+1,0);
	dis[0]=0;
	queue<int>q;
	q.push(0);
	while(!q.empty())
	{
		int c=q.front();
//		cout<<c<<endl;
		q.pop();
		vis[c]=1;
		if(c==n-1)break;
		for(int f:ar[s[c]])
		{
	//		cout<<f<<" ";
			if(dis[f]==N)
			{
				dis[f]=dis[c]+1;
				q.push(f);
			}
		}
		ar[s[c]].clear();
		if(c<n-1&&dis[c+1]==N)
		{
			dis[c+1]=dis[c]+1;
			q.push(c+1);
		}
		if(c>0&&dis[c-1]==N)
		{
			dis[c-1]=dis[c]+1;
			q.push(c-1);
		}
	}
	cout<<dis[n-1]<<endl;
	return 0;
}
