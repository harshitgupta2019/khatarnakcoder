#include <bits/stdc++.h>
using namespace std;

int main() {
	int a1,b1,c,n,j=0;
	cin>>a1>>b1>>c;
int	t=a1+b1+c;
	int b[t],a[t],i;
	int m=0;
   for(i=0;i<t;i++)
	{
		cin>>a[i];
		m=max(m,a[i]);
		
	}
//	cout<<m<<endl;
	int count[m+1]={0};
	for(i=0;i<t;i++)
	{
		count[a[i]]++;
		
	}
	for(i=1;i<=m;i++)
	{
//		cout<<count[i]<<endl;
		
		if(count[i]>1)
		{
			b[j]=i;
			j++;
		}
	}
	sort(b,b+j);
	cout<<j<<endl;
	for(i=0;i<j;i++)
	{
		cout<<b[i]<<endl;
	}
	return 0;
}
