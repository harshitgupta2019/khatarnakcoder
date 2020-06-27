#include <iostream>
using namespace std;

int main() {
long  t,n,g,a,b;
cin>>t;
while(t--)
{
	cin>>n;
	float chef=0,chefu=0;
	while(n--)
	{
		cin>>g>>a>>b;
		long  k=a+b;
		chef+=(1.0*g*b)/(1.0*k);
		chefu+=(1.0*g*a)/(1.0*k);
	}
	printf("%.6lf %.6lf\n",chef,chefu);
//	cout<<chef<<" "<<chefu<<endl;
}
	return 0;
}
