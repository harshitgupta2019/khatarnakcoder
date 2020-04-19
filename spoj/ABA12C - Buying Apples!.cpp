#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int n,k;
  cin>>n>>k;

  int a[k +1],ans[k+1];
  int i,j;
  for( i=1; i<=k; i++ )
   {
   	cin>>a[i];
   	ans[i]=a[i];
   }
  for(i=1;i<=k; i++)
  {
    ans[i] = a[i];
  }
  for(i=2; i<=k; i++)
  {
   for(j=1; j<i; j++)
   {
    if(a[i-j] != -1 &&ans[j] != -1)
    {
    if(ans[i] == -1)
     ans[i] = ans[j] + a[i-j];
    else
    ans[i] = min(ans[i], ans[j] + a[i-j]);
    }

   }

  }
  if(k==0)
   printf("0\n");
  else
  printf("%d\n",ans[k]);

 }
 return 0;
}
