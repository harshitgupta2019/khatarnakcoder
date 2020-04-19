#include <iostream>
using namespace std;
long long int d[1000][1000]={0};
long long int ncr(long long int n, long long int k) 
{ 
    long long int i,j; 
     if(k==0||k==n)
     return 1;
     else if(k==1)
     return n;
     else if(d[n][k]>0)
     return d[n][k];
     else
     {
         d[n][k]=ncr(n-1,k)+ncr(n-1,k-1);
        if(d[n][k]>=1000000007)
        {
            d[n][k]=d[n][k]%1000000007;
        }
        return d[n][k];    
     }
     
  
    
} 
int main() 
{
 long long int t,n,m;
cin>>t;
while(t--)
{
    cin>>n>>m;
    cout<<(ncr(n+m,m))%1000000007<<endl;
    
}
    return 0;
}
