#include <iostream>
using namespace std;

int main() {
	int n,a[n],s,s1,s2,s3;
	cin>>n;
		cout<<"? "<<1<<" "<<2<<endl;
		cin>>s1;
	//	fflush(stdout);
		cout<<"? "<<2<<" "<<3<<endl;
		cin>>s2;
	//	fflush(stdout);
		cout<<"? "<<1<<" "<<3<<endl;
		cin>>s3;
	//	fflush(stdout);
		
		a[0]=(s1-s2+s3)/2;
		a[1]=s1-a[0];
		a[2]=s3-a[0];
	//	int n1=n-3;
		for(int i=3;i<n;i++)
		{
			cout<<"? "<<i<<" "<<i+1<<endl;
			cin>>s;
			fflush(stdout);
			a[i]=s-a[i-1];
		}
		cout<<"!"<<" ";
		for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	
	return 0;
}
