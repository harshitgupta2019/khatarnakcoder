#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
    ll a[53][1401];
    a[0][0]=1;
    for(ll i=1;i<=52;i++)
    {
        a[i][0]=0;
    }
    for(ll i=1;i<=1400;i++)
    {
        a[0][i]=0;
    }
    for(ll i=1;i<=52;i++)
    {
        for(ll j=1;j<=1400;j++)
        {
            a[i][j]=0;
        }
        
    }
    for(ll i=1;i<=52;i++)
    {
        for(ll j=52;j>=1;j--)
        {
            for(ll k=i;k<=1400;k++)
            {
                a[j][k]+=a[j-1][k-i];
            }
        }
    }
	ll t;
	cin>>t;
	ll count=0;
	while(t--)
	{
	    count++;
	    ll l,s;
	    cin>>l>>s;
	    if(l>52||s>1400)
	    {
	    	cout<<"Case "<<count<<": "<<0<<endl; continue;
	    	
	    }
	    cout<<"Case "<<count<<": "<<a[l][s]<<endl;
	}
	return 0;
}

