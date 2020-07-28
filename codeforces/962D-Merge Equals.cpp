#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long int n;
	map<long long int,long long int>m;
	cin>>n;
	long long int a[n+1];
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		if(m[a[i]])
		{
		  a[m[a[i]]]=-1;
		  m[a[i]]=0;
		  a[i]*=2;
		  i--;
		}
		else
		m[a[i]]=i;
	}
	long long int c=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=-1)
		c++;
	}
	cout<<c<<endl;
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=-1)
		cout<<a[i]<<" ";
	}
	return 0;
}
