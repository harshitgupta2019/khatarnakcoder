#include <bits/stdc++.h>
using namespace std;
#define ll  long long int
int main() 
{
	ll n;
	cin>>n;
	vector<ll>a,b;
	ll i,as=0,bs=0,x;
	for(i=0;i<n;i++)
{
	cin>>x;
	a.push_back(x);
}
	for(i=0;i<n;i++)
{
	cin>>x;
	b.push_back(x);
}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
//	for(i=0;i<n;i++)
//	cout<<a[i]<<" "<<b[i]<<endl;
	while(1)
	{
		if(a.size()==0&&b.size()>0)
		b.pop_back();
		else if(b.size()==0&&a.size()>0)
		as+=a.back(),a.pop_back();
		else if(a.size()>0&&b.size()>0)
		{
			if(b.back()>=a.back())
			b.pop_back();
			else
			as+=a.back(),a.pop_back();
		}
		else 
		break;
		if(a.size()==0&&b.size()>0)
		bs+=b.back(),b.pop_back();
		else if(b.size()==0&&a.size()>0)
		a.pop_back();
		else if(a.size()>0&&b.size()>0)
		{
			if(b.back()<=a.back())
			a.pop_back();
			else
			bs+=b.back(),b.pop_back();
		}
		else 
		break;
	}

	cout<<as-bs<<endl;
	return 0;
}
