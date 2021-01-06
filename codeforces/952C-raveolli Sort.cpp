#include <iostream>
using namespace std;

int main() {
int n,p=0;
cin>>n;
int i,a[n];
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n-1;i++)
{
	if(abs(a[i]-a[i+1])>1)
	{
		p=1;
		break;
	}
}
if(p==1)
cout<<"NO"<<endl;
else
cout<<"YES"<<endl;

	return 0;
}
