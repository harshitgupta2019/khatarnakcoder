#include <iostream>
using namespace std;
#define m 1000000007
long long int dp[110000];
int main()
{
	long long int n,k;
	cin>>n>>k;
	long long int a[n],i;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<=n;i++)
	dp[i]=m;
	dp[0]=0;
	for(i=0;i<n;i++)
	{
		for(int j=1;j<=k;j++)
		if(i+j<n)dp[i+j]=min(dp[i+j],abs(a[i]-a[i+j])+dp[i]);
		
	}
	cout<<dp[n-1]<<endl;
	return 0;
}
