#include <bits/stdc++.h>
using namespace std;
bool pos(long long int  *a,long long int x,long long int  *p,long long int k,long long int  n,long long int  &ans)
{
	for(long long int i=1;i<=n;i++)
	{
		if((i-x)>=0&&x*a[i]-(p[i]-p[i-x])<=k)
	{
		ans=a[i];
		return true;
	}
}
	return false;
}
int main() 
{
	//freopen("input.txt","r",stdin);
	//freopen("ou.txt","w",stdout);
	long long int n,k;
	cin>>n>>k;
	long long int a[n+1],i,p[n+1];
	for(i=1;i<=n;i++)
	cin>>a[i];
	sort(a+1,a+n+1);
	p[0]=0;
	for(i=1;i<=n;i++)
	p[i]=p[i-1]+a[i];
	long long int  l=1,r=n,ans1=0,ans2=-1;
	while(l<=r)
	{
		long long int  mid=(l+r)/2;
		if(pos(a,mid,p,k,n,ans2))
		ans1=mid,l=mid+1;
		else
		r=mid-1;
	}
	cout<<ans1<<" "<<ans2<<endl;
	return 0;
}
