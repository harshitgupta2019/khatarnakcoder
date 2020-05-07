#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,i;
	string s,s1;
	cin>>n>>s;
	for(i=0;i<n;i++)
	{
		if(s1.size()%2==0||s1.back()!=s[i])
		s1+=s[i];
	}
	if(s1.size()%2!=0)
	s1.pop_back();
	cout<<n-s1.size()<<endl<<s1;
	
	return 0;
}
