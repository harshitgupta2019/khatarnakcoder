#include <bits/stdc++.h>
using namespace std;
int f(string s1,string s2,int n,int m)
{
	int dp[n+1][m+1];
	if(n==0)
	return m;
	if(m==0)
	return n;
	if(s1[n-1]==s2[m-1])
	return dp[n][m]=f(s1,s2,n-1,m-1);
	else
	{
		return 1+min(f(s1,s2,n-1,m),min(f(s1,s2,n,m-1),f(s1,s2,n-1,m-1)));
	}
	
}
int main() {
	string s1,s2;
	cin>>s1>>s2;
	int n=s1.length();
	int m=s2.length();
	cout<<f(s1,s2,n,m);
	return 0;
}
