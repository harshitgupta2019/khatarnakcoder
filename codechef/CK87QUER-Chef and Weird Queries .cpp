#include <bits/stdc++.h>
using namespace std;
long long int m(long long int a,long long int b)
{
	if(a>=b)
return b;
return a;
}
int main() {
	long long int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int i,ans=0;
		double d=ceil(sqrt(n)-1);
		for(i=d;i>=1;i--)
		{
			long long int y=n-i*i;
			if(y>700)
			{
				break;
			}
			ans+=y;
		}
		ans+=i*700;
		cout<<ans<<endl;
	}
	return 0;
}
