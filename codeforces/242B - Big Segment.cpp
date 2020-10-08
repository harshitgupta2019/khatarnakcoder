#include <bits/stdc++.h>
using namespace std;

int main() {
long long int n,i,l=LLONG_MAX,r=0,p=-1;
cin>>n;
   pair<long long int,long long int>a[n];
   for(i=0;i<n;i++)
   {
   	cin>>a[i].first>>a[i].second;
   	l=min(l,a[i].first);
   	r=max(r,a[i].second);
   }
   for(i=0;i<n;i++)
   {
   	if(l==a[i].first&&r==a[i].second)
   	{
   		p=i+1;
   		break;
   	}
   }
   cout<<p<<endl;
	return 0;
}
