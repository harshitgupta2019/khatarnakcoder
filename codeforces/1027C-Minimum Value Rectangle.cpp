#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n],i;
		vector<ll>b;
		for(i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			if(a[i]==a[i+1])
			b.push_back(a[i]),++i;
		}
		ll p=2*b[0]+2*b[1];
		p=p*p;
		ll s=b[0]*b[1];
	//	cout<<p<<" "s<<endl;
		for(i=0;i<b.size()-1;i++)
		{
			ll P=2*b[i]+2*b[i+1];
			P*=P;
			ll S=b[i]*b[i+1];
			if(P*s<p*S)
			{
				b[0]=b[i];
				b[1]=b[i+1];
				p=P;
				s=S;
			}
		}
		cout<<b[0]<<" "<<b[0]<<" "<<b[1]<<" "<<b[1]<<endl;
		
	}
	return 0;
}
