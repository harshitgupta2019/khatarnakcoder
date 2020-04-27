#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m=1;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int ans=0;
	for(i=1;i<n;i++)
	{
		if(a[i]==a[i-1])
		m++;
		else
		{
			ans=max(ans,m);
			m=1;
		}
	}
	ans=max(ans,m);

		if(2*ans>n)
		{
			cout<<1;
			return 0;
		}
	cout<<0;
	return 0;
}
