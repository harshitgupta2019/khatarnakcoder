#include <iostream>
using namespace std;

int main() {
	string s;
	cin>>s;
	int p=0,i;
	for( i=0;i<s.size()-1;i++)
	{
		if(s[i]=='0')
		{
			if(p==0)
			{
				p=1;
			continue;
			}
			else
			cout<<s[i];
		}
		else
		cout<<s[i];
	}
	if(p==1)
	cout<<s[i];
	return 0;
}
