#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long int ll;
ll a[100100];
ll dp[100100];
ll pre[100100];
ll val;
vector<pair<ll,pair<ll,ll>>>g;
void solve()
{
    for(auto it:g)
    {
        ll val = it.first;
        ll u = it.second.first;
        ll v = it.second.second;
        if(val >pre[u])
        {
            dp[v] = max(dp[v],dp[u]+1);
            pre[v]=val;
        }
        
    }
}
int main()
{
    fast
    int T;cin>>T;
    while(T--)
    {
        ll n,m;
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            dp[i]=0;
            pre[i]=0;
            g.clear();
        }
        
    for(int i=0;i<m;i++)
    {
        ll u,v;
        cin>>u>>v;
        if(a[u]>a[v])
        {
            g.push_back({a[u]-a[v],{v,u}});
        }
        if(a[v]>a[u]){
            g.push_back({a[v]-a[u],{u,v}});
        }
    }
        sort(g.begin(),g.end());
        solve();
        ll ans=-1;
        for(int i=1;i<=n;i++)ans=max(ans,dp[i]);
        cout<<ans+1<<endl;
    }
}
