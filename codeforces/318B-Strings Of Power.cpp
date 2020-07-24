#include <iostream>
using namespace std;

int main() {
	string s;
	cin>>s;
	long long int ans=0,c=0;
	for(int i=4;i<s.length();i++)
	{
		if(s[i]=='l'&&s[i-4] == 'm' && s[i-3] == 'e' && s[i-2] == 't' && s[i-1] == 'a')
		ans+=c;
		else if(s[i]=='y'&&s[i-4] == 'h' && s[i-3] == 'e' && s[i-2] == 'a' && s[i-1] == 'v')
		++c;
	}
	cout<<ans<<endl;
	return 0;
}
