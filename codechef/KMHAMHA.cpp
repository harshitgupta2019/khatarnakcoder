#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector < vector <int> > ar;
vector <int> Pair;
vector <bool> Vis;
map <long long,int> row;
map <long long,int> col;
set <long long>row_set;
set <long long> col_set;
bool dfs(int v) 
{
  Vis[v] = true;
  for (int x : ar[v]) {
   if (Pair[x] == -1 || (!Vis[Pair[x]] && dfs(Pair[x]))) {
     Pair[x] = v;
     Pair[v] = x;
     return true;
   }
  }
  return false;
}
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,x,y,i;
		cin>>n;
		vector <pair<ll,ll>>p(n);
   row.clear();
   col.clear();
   col_set.clear();
   row_set.clear();
		for(i=0;i<n;i++)
		{
			cin>>x>>y;
			row_set.insert(y);
			col_set.insert(x);
			p[i]=make_pair(x,y);
		}
		int c = 1;
   for (ll x : row_set) {
     row[x] = c;
     c++;
   }
   c = 1001;
   for (ll x : col_set) {
     col[x] = c;
     c++;
   }
ar.clear();
ar.resize(2003);
    for (pair<ll,ll> P : p) {
     int x = col[P.first];
     int y =row[P.second];
    ar[x].push_back(y);
     ar[y].push_back(x);
   }
   Pair.assign(2003,-1);
   Vis.assign(2003,false);
   for ( i = 1;i <= 1000;i++) {
     Vis.assign(2003,false);
     dfs(i);
   }
   ll ans=0;
   for(i=1001;i<2001;i++)
   {
   	if(Pair[i]!=-1)
   	ans++;
   }
   cout<<ans<<endl;
   }
	return 0;
}
