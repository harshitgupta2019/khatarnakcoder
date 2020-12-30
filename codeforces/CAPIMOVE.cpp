#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,u,v1,j;
		cin>>n;
		
		vector<pair<int,int>>v(n+1);
		vector<int>adj[n+1];
		for(int i=1;i<=n;i++)
		{
			cin>>v[i].first;
			v[i].second=i;
		}
		for(int i=1;i<n;i++)
		{
		    cin>>u>>v1;
		    adj[u].push_back(v1);
		    adj[v1].push_back(u);
		}
		sort(v.begin()+1,v.end());
		int in[n+1]={0};
		for(int i=1;i<=n;i++)
		{
			in[i]=i;
		//	cout<<in[i];
			for( int k:adj[i])
			in[k]=i;
			for( j=n;j>0;j--)
			{
				if(in[v[j].second]!=i)
				{
					cout<<v[j].second<<" ";
					
					break;
				}
			}
			if(j==0)
			cout<<0<<" ";
		}
		cout<<endl;
	}
	return 0;
}
