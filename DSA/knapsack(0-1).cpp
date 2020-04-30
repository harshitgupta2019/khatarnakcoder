#include <bits/stdc++.h> 
using namespace std; 

long long int knapSack(long long int n, long long int w,long long int wt[],long long int val[]) 
{ 
   long long int i, j; 
   long long int dp[n+1][w+1]; 
   for (i = 0; i <= n; i++) 
   { 
       for (j = 0; j <= w; j++) 
       { 
           if (i==0 || j==0) 
               dp[i][j] = 0; 
           else if (wt[i-1] <= j) 
                 dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]],  dp[i-1][j]); 
           else
                 dp[i][j] = dp[i-1][j]; 
       } 
   } 
   return dp[n][w]; 
} 
  
int main() 
{ 
   long long int n,w;
   cin>>n>>w;
   long long int wt[n],val[n],i;
   for(i=0;i<n;i++)
   {
   	cin>>wt[i]>>val[i];
   }
    cout << knapSack(n,w, wt, val); 
    return 0; 
} 
