#include <bits/stdc++.h>
using namespace std;
int par[1000001];
int find(int a)
{
	if(a==par[a])
	return a;
	return par[a]=find(par[a]);
}
int main() {
	int  t,n,q,c,x,y,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int s[n+1];
		for(i=1;i<=n;i++)
		{
			cin>>s[i];
			par[i]=i;
		}
		cin>>q;
		while(q--)
		{
			cin>>c;
			if(c==0)
			{
				cin>>x>>y;
				x=find(x);
				y=find(y);
				if(x==y) cout<<"Invalid query!"<<endl;
				else
				{
					if(s[x]==s[y])
					continue;
					else if(s[x]>s[y])
					par[y]=x;
					else
					par[x]=y;
				}	
				
			}
			else
			{
				cin>>x;
				cout<<find(x)<<endl;
			}
		}
	}
	return 0;
}
