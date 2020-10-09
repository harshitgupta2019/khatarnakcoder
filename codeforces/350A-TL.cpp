#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int a[n],b[m],i;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<m;i++)
	cin>>b[i];
	sort(a,a+n);
	sort(b,b+m);
	int p=2*a[0];
	p=max(p,a[n-1]);
	if(b[0]<=p)
	cout<<-1<<endl;
	else
	cout<<p<<endl;
	return 0;
}
