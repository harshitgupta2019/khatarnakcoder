#include <iostream>
using namespace std;
long long int C(long long int n,long long int k)
{
	long long int ans=1,i;
	if(k>n-k)
	k=n-k;
	for(i=1;i<=k;i++)
	ans*=(n-i+1),ans/=i;
	return ans;
}
int main() {
	long long int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>k;
		cout<<C(n-1,k-1)<<endl;
	}
	return 0;
}
