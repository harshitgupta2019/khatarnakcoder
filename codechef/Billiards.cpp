#include <bits/stdc++.h>
using namespace std;
int main() 
{
	long long int t,n;
	long mod=1000000009;
	cin>>t;
	int dp[1000001];
	dp[0]=0;
	dp[1]=0;
    dp[2]=1;
    dp[3]=1;
    for(int i=4;i<=1000000;i++)
    {
        dp[i]=(dp[i-2]+dp[i-3])%mod;
    }
	while(t--)
	{
		cin>>n;
		long ans=dp[n];
		cout<<ans<<endl;
	}
	return 0;
}
