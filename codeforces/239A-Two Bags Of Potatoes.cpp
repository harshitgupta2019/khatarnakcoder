#include <iostream>
using namespace std;

int main()
{
long long int y,k,n,i,d;
cin>>y>>k>>n;
d=k-y%k;
if(y+d>n)
cout<<-1<<endl;
else
{
	for(i=y+d;i<=n;i+=k)
	cout<<i-y<<" ";
}

	return 0;
}
