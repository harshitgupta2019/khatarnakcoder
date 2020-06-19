#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll n,k,c[8001]={0},x,j,i;
	vector<ll>val;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>x;
		c[x]++;
	}
	for(i=0;i<8001;i++)
	{
	//	cout<<c[i]<<" ";
		if(c[i]!=0)
		val.push_back(c[i]);
	}
	n=min(n,k);
	ll m=val.size();
	ll dp[k+1][m]={0};
	for(i=1;i<=k;i++)
	{
		for(j=0;j<m;j++)
		{ // cout<<val[j]<<" ";
			if(i==1&&j==0)
			dp[i][j]=val[j];
			else if(i==1)
			dp[i][j]=dp[i][j-1]+val[j];
			else 
			{
				if((j+1)<i||j==0)  
				dp[i][j]=0;
			else 
			{
				dp[i][j]=(dp[i][j-1]+val[j]*dp[i-1][j-1])%1000000007;
				
			}
			}
		}
	}

	ll ans=0;
	for(i=1;i<=k;i++)
	{
		ans+=dp[i][m-1];
		ans%=1000000007;
	}
	cout<<ans+1<<endl;
	return 0;
}
