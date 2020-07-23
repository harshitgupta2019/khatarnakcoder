#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m=INT_MAX;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		m=min(m,a[i]);
	}
	for(i=0;i<n;i++)
	a[i]=a[i]-m;
	int c=0;
	for(i=m%n;i<n;i++)
	{
		if(a[i]<=c)
		{
			cout<<i+1<<endl;
			break;
		}
		c++;
		if(i+1==n)
		i=-1;
	}
	return 0;
}
