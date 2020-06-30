#include<bits/stdc++.h>
using namespace std;

int par[10001];
int find(int a)
{
if(par[a]==-1)return a;
return par[a]=find(par[a]);
}
void merge(int a,int b)
{
	par[a]=b;
}
struct edge{
	int a,b,w;
};
edge ar[100000];

bool comp(edge a ,edge b)
{
	if(a.w<b.w)
	return true;
	return false;
}
int main()
{
	int n,m,a,b,w,i,sum=0;
	cin>>n>>m;
	for(i=1;i<=n;i++) par[i]=-1;
	for(i=0;i<m;i++)
	{
		cin>>ar[i].a>>ar[i].b>>ar[i].w;
	}
	sort(ar,ar+m,comp);
	for(i=0;i<m;i++)
	{
		a=find(ar[i].a);
		b=find(ar[i].b);
		if(a!=b)
		{
			sum+=ar[i].w;
			merge(a,b);
		}
	}
	cout<<sum<<endl;
}
