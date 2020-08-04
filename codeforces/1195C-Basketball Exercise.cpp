#include <iostream>
using namespace std;

int main() {
	long long int n;
	cin>>n;
	long long int a[2][n],i;
	for(i=0;i<2;i++)
	{
		for(int j=0;j<n;j++)
		cin>>a[i][j];
	}
	pair<long long int,long long int>d,p;
	d={0,0};
	for(i=0;i<n;i++)
	{
		p={max(d.first,d.second+a[0][i]),max(d.second,d.first+a[1][i])};
		d=p;
	}
	cout<<max(d.first,d.second);
	return 0;
}
