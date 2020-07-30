#include <iostream>
using namespace std;

int main() {
	long long int t,s,a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>s>>a>>b>>c;
		long long int d=s/c;
		long long int x=d/a;
		long long int y=x*b;
		cout<<y+d<<endl;
	}
	return 0;
}
