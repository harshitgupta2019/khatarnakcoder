#include <iostream>
using namespace std;

int main() 
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
    if((d-2*a<3)&&(a-d<=1)||(c-2*b<3)&&(b-c<=1))
    cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}
