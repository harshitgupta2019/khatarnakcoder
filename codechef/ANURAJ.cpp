#include <bits/stdc++.h>
#define ll long long
#define m 1000000009
using namespace std;
void multiply(ll F[2][2],ll M[2][2])
{
    ll x = (F[0][0] * M[0][0])%m + (F[0][1] * M[1][0])%m; 
    ll y = (F[0][0] * M[0][1])%m + (F[0][1] * M[1][1])%m; 
    ll z = (F[1][0] * M[0][0])%m+ (F[1][1] * M[1][0])%m; 
    ll w = (F[1][0] * M[0][1])%m + (F[1][1] * M[1][1])%m; 
      
    F[0][0] = x%m; 
    F[0][1] = y%m; 
    F[1][0] = z%m; 
    F[1][1] = w%m; 
}
void power(ll pw,ll F[2][2])
{
    if(pw==0||pw==1)
    return;
    
    
    ll M[2][2]={{1,1},{1,0}};
    power(pw/2,F);
    multiply(F,F);
    if(pw%2!=0)
    {
        multiply(F,M);
    }
    
}
ll fibo(ll n)
{
    if(n==0)
    {
        return 2;
    }
    if(n==1)
    {
        return 3;
    }
     if(n==2)
    {
        return 4;
    }
    ll F[2][2]={{1,1},{1,0}};
    power(n-1,F);
    ll O[2][1]={{4},{3}};
   
     ll x = (F[0][0] * O[0][0])%m + (F[0][1] * O[1][0])%m; 
    ll z = (F[1][0] * O[0][0])%m+ (F[1][1] * O[1][0])%m; 
     return z%m;
    
}

int main() 
{
	ll n,e;
	cin>>n>>e;
	ll ans[n+1]{0};
	ll mat[n+1][n+1];
	for(ll i=1;i<=n;i++)
	{
	    for(ll j=1;j<=n;j++)
	    {
	        mat[i][j]=INT_MAX;
	        mat[i][i]=0;

	    }
	}
	for(ll i=0;i<e;i++)
	{
	    ll a,b,d;
	    cin>>a>>b>>d;
	    mat[a][b]=d;
	    mat[b][a]=d;
	}
	
	
	for(ll i=1;i<=n;i++)
	{
	    for(ll j=1;j<=n;j++)
	    {
	        for(ll k=1;k<=n;k++)
	        {
	            if(mat[j][k]>mat[j][i]+mat[i][k])
	            {
	                mat[j][k]=mat[j][i]+mat[i][k];
	            }
	        }
	    }
	}
	ll q;
	cin>>q;
	for(ll i=0;i<q;i++)
	{
	    ll u,k;
	    cin>>u>>k;
	    ll fk=fibo(k-1);
	    for(ll j=1;j<=n;j++)
	    {
	        ans[j]+=fk+mat[u][j];
	        ans[j]%=m;
	    }
	}
	
	for(ll j=1;j<=n;j++)
	{
	    cout<<ans[j]<<" ";
	}
	cout<<endl;
	return 0;
}


