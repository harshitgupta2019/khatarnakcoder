#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ll a[n][m],i,j;
        vector<pair<ll,ll>>v(n*m+1);
        vector<vector<ll> > ans(n,vector<ll>(m,2));
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
                v[a[i][j]]={i,j};
            }
        }
        for(i=n*m;i>0;i--)
        {
            ll x=v[i].first;
            ll y=v[i].second;
            if(ans[x][y]==1||ans[x][y]==0)
            continue;
            while(x<n)
            {
                ans[x][y]=0;
    			for(ll g=x+1,h=y-1;g<n && h>=0 && ans[g][h]!=1 && ans[g][h]!=0 ; ++g,--h)
    				ans[g][h]=0;
    			for(ll g=x+1,h=y+1;g<n && h<m && ans[g][h]!=1 && ans[g][h]!=0 ; ++g,++h)
    				ans[g][h]=0;
    			x++;
    			if(x<n)
    			{
    				if(ans[x][y]==1 || ans[x][y]==0)
    					break;
    			}
            }
            ans[v[i].first][y]=1;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            cout<<ans[i][j];
            cout<<endl;
        }
    }
}
