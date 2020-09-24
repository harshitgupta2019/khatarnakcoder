#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
	ll n;
	cin>>n;
	map<ll,vector<ll>> m;
	vector<pair<ll,ll>>v;
	ll a,i;
	for(i=0;i<n;i++)
	{
		cin>>a;
		m[a].push_back(i);
	}
	map<ll,vector<ll>>::iterator p;
   for(p=m.begin();p!=m.end();p++)
   {
   	set<ll>s;
   	ll k=p->first;
   	if(m[k].size()==1)
   	v.push_back({k,0});
   	else
   	{
   		for(ll i=1;i<m[k].size();i++)
   		s.insert(abs(m[k][i]-m[k][i-1]));
   		set<ll>::iterator q=s.begin();
   		if(s.size()==1)
   		v.push_back({k,*q});
   	}
   	
   }
   cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;
	return 0;
}
