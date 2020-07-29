#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,k;
	cin>>n>>k;
	long long int a[n],i;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	if(k==0&&a[0]!=1)
	cout<<a[0]-1;
	else if(k==0)
	cout<<-1;
	else if(a[k-1]!=a[k])
	cout<<a[k-1];
	else
	cout<<-1;
	return 0;
}
