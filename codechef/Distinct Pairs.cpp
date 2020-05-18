#include <iostream>
using namespace std;

int main() {
	long long int n,m,k,j,i,mi=1e9+7,ma=-1e9+7,x,y;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(x>ma)
		{
			j=i;
			ma=x;
		}
	}
	for(i=0;i<m;i++)
	{
		cin>>y;
		if(y<mi)
		{
			k=i;
			mi=y;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<i<<" "<<k<<endl;
	}
	for(i=0;i<m;i++)
	{
		if(k!=i)
		{
			cout<<j<<" "<<i<<endl;
		}
	}
	return 0;
}
