#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
#define MAXN 5005
int n, m, a[MAXN], dp[MAXN];

int main() 
{    
	cin>>n>>m;
	for(int i = 1; i <= n; i++) {
		double x;
		cin>>a[i]>>x;
	}
	
	for(int i = 1; i <= n; i++) 
	{
		int j = a[i];
		for(int k = j; k >= 1; k--) 
			dp[j] = max(dp[j], 1+dp[k]);
	}
	
	int ans = 0;
	for(int i = 1; i <= n; i++) 
		ans = max(ans, dp[i]);
	cout<<n-ans<<endl;
}
