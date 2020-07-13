#include <bits/stdc++.h>
using namespace std;
vector<int>ar[51];
int vis[51],c;
int gcd(int a,int b)
{
	if(b==0)
	return a;
	return gcd(b,a%b);
}
void dfs(int node)
{
	c++;
	vis[node]=1;
	for(int i:ar[node])
	{
		if(vis[i]==0)
		dfs(i);
	}
}
int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		 for(int i = 1; i <= n; i++) 
		 ar[i].clear(),vis[i]=0;
		 c=0;
		int a[n+1],i,j,cnt[50]={0};
		for(i=1;i<=n;i++)
		cin>>a[i];
		for(i=1;i<=n;i++)
		{
			cnt[a[i]]++;
			for(j=i+1;j<=n;j++)
			{
				if(gcd(a[i],a[j])==1)
				{
					ar[i].push_back(j);
					ar[j].push_back(i);
				}
			}
		}
		dfs(1);
		if(c==n)
		cout<<0<<endl;
		else 
		{
			cout<<1<<endl;
			if(cnt[37]==0)
			a[1]=37;
			else if(a[1]!=37)
			a[1]=31;
			else
			a[2]=31;
			
		}
		for(i=1;i<=n;i++)
		cout<<a[i]<<" ";
			cout<<endl;
		
	}
	return 0;
}
