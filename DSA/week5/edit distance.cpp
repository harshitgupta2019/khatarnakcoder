#include <bits/stdc++.h>
using namespace std;
int f(string s1,string s2,int n,int m)
{
	int dp[n+1][m+1],i,j;
	for ( i = 0; i <= n; i++) 
	{ 
        for ( j = 0; j <= m; j++) 
        { 
            if (i == 0) 
                dp[i][j] = j;
            else if (j == 0) 
                 dp[i][j]=i;
            else if (s1[i - 1] == s2[j - 1]) 
                dp[i][j] = dp[i - 1][j - 1]; 
            else
                dp[i][j] = 1 + min(dp[i][j - 1],min(dp[i - 1][j], dp[i - 1][j - 1]));
        } 
    } 
    return dp[n][m]; 
} 
int main() {
	string s1,s2;
	cin>>s1>>s2;
	int n=s1.length();
	int m=s2.length();
	cout<<f(s1,s2,n,m);
	return 0;
}
