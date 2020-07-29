#include <iostream>
using namespace std;

 int main() {
	long long int n,d,s=0;
	cin>>n>>d;
	long long int a[n],i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	for(i=0;i<n;i++)
	{
		long long  int ma=min(a[i],d+1-n);
		long long  int mi=max(1LL,d+a[i]-s);
		cout<<mi-1+a[i]-ma<<" ";
	}
	return 0;
}
