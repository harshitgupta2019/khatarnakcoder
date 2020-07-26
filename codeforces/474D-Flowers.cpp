#include <iostream>
using namespace std;
#define mod 1000000007
int k;
long long int pre[100001],dp[100001];
int getans(int n)
{
	if(n==0)return 1;
	if(dp[n]!=-1)return dp[n]%mod;
	int ans=0;
	if(n>=k)
	ans+=getans(n-k),ans%=mod;
	ans+=getans(n-1),ans%=mod;
	return dp[n]=ans%mod;
}
void init()
{
	for(int i=1;i<=100000;i++)
	dp[i]=-1;
	for(int i=1;i<=100000;i++)
	pre[i]=pre[i-1]+getans(i),pre[i]%=mod;
}
int main() 
{
	int t,a,b;
	cin>>t>>k;
	init();
	while(t--)
	{
		cin>>a>>b;
		int sum=(pre[b]-pre[a-1]+mod)%mod;
		
		cout<<sum%mod<<endl;
	}
	return 0;
}
