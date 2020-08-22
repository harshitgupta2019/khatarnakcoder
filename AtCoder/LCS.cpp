#include <bits/stdc++.h>
using namespace std;
int dp[3001][3001];
int main() {
	string s,t;
	cin>>s>>t;
	int i,j;
	int n=s.length(),m=t.length();
	for(i=0;i<=s.length();i++)
	{
		for(j=0;j<=t.length();j++)
		{
			if(i==0||j==0)dp[i][j]=0;
			else if(s[i-1]==t[j-1])dp[i][j]=max(dp[i][j],1+dp[i-1][j-1]);
			else
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	string ans="";
int ctr=dp[n][m];
        int r=m;
        for(int i=n;i>=1;i--)
        {
            for(int j=r;j>=1;j--)
            {
                if(dp[i][j]==ctr&&s[i-1]==t[j-1])
                {
                    ans+=s[i-1];
                    ctr--;
                    break;
                }
            }
        }
        reverse(ans.begin(),ans.end());
        
cout<<ans<<endl;
	return 0;
}
