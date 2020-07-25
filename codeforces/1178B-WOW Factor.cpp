#include <iostream>
using namespace std;

int main() {
	string s;
	cin>>s;
	long long int ans=0,a=0,b=0;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='o')
		b+=a;
		else if(i>0&&s[i-1]=='v')
		{
			a++;
			ans+=b;
		}
	}
	cout<<ans<<endl;
	return 0;
}
