#include<iostream>
using namespace std;
int a,s,d[100002],g,h,j,k,l,i,n,m;

int main()
{
cin>>n>>m;
for(i=1;i<=n;i++)
{
cin>>k;
if(d[k]==0)
{j++;d[k]=i;} 
else d[k]=i;
if(j==m) 
{
	l=i;
for(i=1;i<100002;i++)
if(d[i]>0 && (g==0 || d[i]<g)) g=d[i];
cout<<g<<" " <<l;
return 0;
}
	
}
cout<<-1<< " "<<-1;
return 0;
}
