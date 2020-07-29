#include <iostream>
using namespace std;

int main() {
	 long long int n;
	cin>>n;
	long long int a[n],i,s=0,j,ans=0,c[n]={0};
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	if(s%3!=0)
	cout<<0<<endl;
	else
	{
		s/=3;
		long long ss=0;
		for(i=n-1;i>=0;i--)
		{
			ss+=a[i];
			if(ss==s)
			c[i]=1;
		}
		for(i=n-2;i>=0;i--)
		c[i]+=c[i+1];
		ss=0;
		for(i=0;i<n-2;i++)
		{
			ss+=a[i];
			if(ss==s)
			ans+=c[i+2];
		}
		cout<<ans<<endl;
	}
	return 0;
}
