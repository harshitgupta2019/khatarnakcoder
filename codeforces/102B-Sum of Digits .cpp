#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s;
	cin>>s;
	int n=s.length(),ans=0,i,sum;
	while(n>1)
	{
		sum=0;
		for(i=0;i<n;i++)
		sum+=s[i]-'0';
		s=to_string(sum);
		n=s.length();
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}
