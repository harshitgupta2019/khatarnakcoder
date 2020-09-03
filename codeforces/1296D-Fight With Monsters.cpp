#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,a,b,k,ans=0;
	cin>>n>>a>>b>>k;
	long long int h[n];
	for(int i=0;i<n;i++)
		cin>>h[i];
		for(int i=0;i<n;i++)
		{
			h[i]=h[i]%(a+b);
			if(h[i]==0)h[i]=a+b;
			h[i]=((h[i]+a-1)/a) -1;
		}
		sort(h,h+n);
		for(int i=0;i<n;i++)
		{
			if(k-h[i]<0)break;
			ans++;
			k-=h[i];
		}
		cout<<ans<<endl;
	return 0;
}
