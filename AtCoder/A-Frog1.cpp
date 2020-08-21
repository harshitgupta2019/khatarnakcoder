#include <iostream>
using namespace std;
#define m 1000000007
long long int dp[110000];
int main() {
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<=n;i++)
	dp[i]=m;
	dp[0]=0;
	for(i=0;i<n;i++)
	{
		if(i+1<n)dp[i+1]=min(dp[i+1],abs(a[i]-a[i+1])+dp[i]);
		if(i+2<n)dp[i+2]=min(dp[i+2],abs(a[i]-a[i+2])+dp[i]);
	}
	cout<<dp[n-1]<<endl;
	return 0;
}
