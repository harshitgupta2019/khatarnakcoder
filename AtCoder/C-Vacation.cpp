#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n],b[n],c[n],i,j;
  int dp[n][3]={0};
  for(i=0;i<n;i++)
  {
  	cin>>a[i]>>b[i]>>c[i];
  }
  for(i=0;i<n;i++)
  {
  	for(j=0;j<3;j++)
  	{
  		if(i==0)
  		{
  			if(j==0)dp[i][j]=a[i];
  			if(j==1)dp[i][j]=b[i];
  			if(j==2)dp[i][j]=c[i];
  		}
  		else
  		{
  			for(int k=0;k<3;k++)
  			{
  				if(j!=k)
  				{
  					if(j==0)dp[i][j]=max(dp[i][j],dp[i-1][k]+a[i]);
  		           	if(j==1)dp[i][j]=max(dp[i][j],dp[i-1][k]+b[i]);
  			        if(j==2)dp[i][j]=max(dp[i][j],dp[i-1][k]+c[i]);
  				}
  			}
  		}
  	}
  }
  cout<<max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));
}
