#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll gcd(ll a,ll b)
{
	if(b==0)
	return a;
	return gcd(b,a%b);
}
int main() {
	ll n;
	cin>>n;
	ll a[n],i,c=0;
	vector<ll>v;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<n;i++)
	{
		v.push_back(a[i-1]);
		if(gcd(a[i],a[i-1])!=1)
		{
			c++;
			v.push_back(1);
			
		}
	//	v.push_back(a[i]);
	}
	v.push_back(a[n-1]);
	cout<<c<<endl;
	for(i=0;i<v.size();i++)
	cout<<v[i]<<" ";
	return 0;
}
