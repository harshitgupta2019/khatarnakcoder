#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define mod1 998244353 
using namespace std;
 ll dp[101][100001];
int main()
{
    int t=1;
    while(t--)
    {
        ll n,w;
        cin>>n>>w;
        ll i,j;
        ll W[n];
        ll V[n];
        for(i=0;i<n;i++)
        {
            cin>>W[i];
            cin>>V[i];
        }
       
        for(i=0;i<101;i++)
        {
            for(j=0;j<100001;j++)
            dp[i][j]=LLONG_MAX-1000000000;
        }
        for(i=0;i<=n;i++)
        dp[i][0]=0ll;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=100000;j++)
            {
                if(j>=V[i-1])
                {
                    dp[i][j]=min(dp[i][j],W[i-1]+dp[i-1][j-V[i-1]]);
                }
                dp[i][j]=min(dp[i][j],dp[i-1][j]);
            }
        }
        ll ans;
        for(i=100000;i>=0;i--)
        {
            if(dp[n][i]<=w)
            {ans=i; break;}
        }
        cout<<ans<<endl;

    }
    return 0;
} 

