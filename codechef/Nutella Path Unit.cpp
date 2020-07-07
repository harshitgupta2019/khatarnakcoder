#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MAX=100009;
const ll l=ceil(log2(MAX));
vector<ll> ar[MAX];
ll a[MAX],level[MAX],val[MAX],LCA[MAX][l+1];

void dfs(ll node,ll par,ll depth){
    level[node]=depth;
    val[node]=val[par]^a[node];
    LCA[node][0]=par;
    for(ll i=1;i<=l;i++){
        LCA[node][i]=LCA[LCA[node][i-1]][i-1];
    }
    for(auto i:ar[node]){
        if(i!=par)
            dfs(i,node,depth+1);
    }
}
ll lca(ll a,ll b)
{
	if(level[a]>level[b])
	swap(a,b);
	ll d=level[b]-level[a];
	while(d>0)
	{
		ll i=log2(d);
		b=LCA[b][i];
		d=d-(1<<i);
	}
	if(a==b)return a;
	while(LCA[a][0]!=LCA[b][0])
	a=LCA[a][0],b=LCA[b][0];
	return LCA[a][0];
}
int main() {
	ll t,n,q,i;
	cin>>t;
	while(t--)
	{
		cin>>n>>q;
		ll x,y;
		for(i=1;i<=n;i++)
		cin>>a[i];
		for(i=1;i<n;i++)
		{
			cin>>x>>y;
			ar[x].push_back(y);
			ar[y].push_back(x);
		}
		val[1]=0;
		dfs(1,1,0);
		while(q--)
		{
			cin>>x>>y;
			ll c=lca(x,y);
			ll res=val[x]^val[y]^a[c];
			cout<<res<<endl;
		}
		for(i=0;i<=n;i++)
		{
			ar[i].clear();
			val[i]=0;
		}
	}
	return 0;
}
