#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define S second
#define F first
#define f(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define vi vector<int>
#define pii pair<int,int>

const int N = 1e5 + 10;
vi ar[N];

int tot = 0;
bool res[N];
int n;
int sz[N];

void dfs(int node,int par = -1)
{
    res[node] = 1;
    sz[node] = 1;
    
    int m = -1;
    
    for(auto x : ar[node])
       if( x != par)
    {
        dfs(x,node);
        sz[node]+=sz[x];
        m = max(m,sz[x]);
    }   
    m = max(m,n-sz[node]);
    
    int w = n - m;
    
    if(w <= tot) res[node] = 0;  
}

void solve()
{
    cin >> n;
    int u,v;
    for(int i=1;i<=n;i++) ar[i].clear();
    f(i,n-1)
    {
        cin >> u >> v;
        ar[u].pb(v);
        ar[v].pb(u);
    }
    
    
    
    tot = (n/2) - 1;
    
    dfs(1);
    
    if(n%2 == 1) for(int i=1;i<=n;i++) res[i] = 0;
    
    for(int i=1;i<=n;i++) cout << res[i];
    cout << '\n';    
}

signed main()
{
    fast;
    
    int t = 1;
    
    cin >> t;
    
    while(t--)
        
    solve();
}
