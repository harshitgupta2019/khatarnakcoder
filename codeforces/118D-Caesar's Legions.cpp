#include <iostream>
using namespace std;
#define ll long long int
ll k1,k2,dp[101][101][11][11];
ll getans(ll f,ll h,ll k11,ll k22)
{
   // cout<<n<<" "<<f<<" "<<h<<" "<<k11<<" "<<k22<<endl;
    if(f+h==0)return 1;
    if(dp[f][h][k11][k22]!=-1)return dp[f][h][k11][k22];
    int x=0;
    if(f>0&&k11>0)
    {
        x=getans(f-1,h,k11-1,k2);
        
    }
    int y=0;
    if(h>0&&k22>0)
    {
        y=getans(f,h-1,k1,k22-1);
       
    }
    return dp[f][h][k11][k22]=(x+y)%100000000;
}
int main() 
{
ll n1,n2;
cin>>n1>>n2>>k1>>k2;
for(int i=0;i<=n1;i++)
{
    for(int j=0;j<=n2;j++)
    {
        for(int k=0;k<=k1;k++)
        {
            for(int l=0;l<=k2;l++)
            dp[i][j][k][l]=-1;
        }
    }
}
cout<<getans(n1,n2,k1,k2)<<endl;
	return 0;
}
