#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n;
	cin>>n;
	long long int a[n],i,m=0,p=-1;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>m)
		{
			m=a[i];
			p=i;
		}
	}
	if(m==1)
	a[p]=2;
	else
	a[p]=1;
	sort(a,a+n);
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	
	return 0;
}
