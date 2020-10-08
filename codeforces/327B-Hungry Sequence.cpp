#include <iostream>
using namespace std;

int main() {
	long long int n,i;
	cin>>n;
	if(n==1)
	cout<<1<<endl;
	else
	{
		for(i=0;i<=n-1;i++)
		cout<<3*n+i<<" ";
	}
	
	
	return 0;
}
