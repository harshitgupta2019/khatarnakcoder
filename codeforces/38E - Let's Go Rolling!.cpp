#include <bits/stdc++.h>
using namespace std;
#define ll long long int
pair<ll,ll>v[3001];
ll n,dp[3001][3001],inf=1000000000000000;
ll getans(ll p,ll pre)
{
	if(p>n)return 0;
	if(dp[p][pre]!=-inf)return dp[p][pre];
	//pin
	ll x=v[p].second+getans(p+1,p);
	//not pin
	ll y=abs(v[p].first-v[pre].first)+getans(p+1,pre);
	return dp[p][pre]=min(x,y);
}
int main() 
{
    cin>>n;
    for(int i=0;i<=n;i++)
    {
    	for(int j=0;j<=n;j++)
    	dp[i][j]=-inf;
    }
    for(int i=1;i<=n;i++)
    {
    	cin>>v[i].first>>v[i].second;
    }
    sort(v+1,v+n+1);
    cout<<getans(2,1)+v[1].second<<endl;
	return 0;
}
