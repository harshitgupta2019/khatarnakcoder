#include <iostream>
using namespace std;

int main() {
	int n,j;
	cin>>n;
	int a[n],i,c[100001]={0},m=1,d=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		c[a[i]]++;
	}
	for(i=2;i<=100000;i++)
	{

		for(j=i;j<=100000;j+=i)
		d+=c[j];
		m=max(d,m);
    	d=0;
	}
	cout<<m<<endl;
	return 0;
}
