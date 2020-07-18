#include <iostream>
using namespace std;

int main() {
	long long int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int dp[100001],i,m=1000000007;
		dp[0]=0;
		dp[1]=1;
		dp[2]=2;
		dp[3]=4;
		for(i=4;i<=n;i++)
		dp[i]=(dp[i-1]+dp[i-2]+dp[i-3])%m;
		cout<<dp[n]<<endl;
	}
	return 0;
}
