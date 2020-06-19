#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	ll t=1,i,j;
	while(t--){
      ll n,k,p,i,j;
      cin>>n>>k>>p;
      vector<pair<long long,long long> > v(n);
      for(i=0;i<n;i++)
      {
          cin>>v[i].first;
          v[i].second=i;
      }
      sort(v.begin(),v.end());
      vector<long long > f(n,0);
      f[v[0].second]=1;
      ll c=1;
      for(i=1;i<n;i++)
      {
          if(v[i].first-v[i-1].first>k)
             c++;
          f[v[i].second]=c;
      }
      for(i=0;i<p;i++)
      {
          ll a,b;
          cin>>a>>b;
          if(f[a-1]==f[b-1])
          {
              cout<<"Yes\n";
          }
          else
          cout<<"No\n";
      }
	}
	return 0;
}
