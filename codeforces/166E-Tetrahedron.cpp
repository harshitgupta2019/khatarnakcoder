#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 1000000007
int main()
{
	int i, j, k;
	int n, m;

	cin>>n;
	int dp[n+1][4]={0};

	ll a, b, c, d, x;
	
	//in the first step i can go in either A,B or C but i won't reach D
	//so one way to reach A,B,C and 0 ways to reach D
	dp[1][0] = dp[1][1] = dp[1][2] = 1,  dp[1][3] = 0;
	for (i = 2; i <= n; i++)
	{
		a = dp[i - 1][0] % M; b = dp[i - 1][1] % M;
		c = dp[i - 1][2] % M; d = dp[i - 1][3] % M;

		//from B, C, D we can go to A
		x = b + c + d;
		dp[i][0] = x % M;

		//from A, C, D we can go to B
		x = a + c + d;
		dp[i][1] = x % M;

		//from A, B, D we can go to C
		x = a + b + d;
		dp[i][2] = x % M ;

		//from A, B, C we can go to D
		x = a + b + c;
		dp[i][3] = x % M;
	}

	cout<<dp[n][3];

	return 0;
}
