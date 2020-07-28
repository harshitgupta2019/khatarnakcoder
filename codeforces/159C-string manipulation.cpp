#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	string s1,s="";
	cin>>s1;
	vector<int>v[26];
	for(int i=0;i<n;i++)
	s+=s1;
	for(int i=0;i<s.length();i++)
	v[s[i]-'a'].push_back(i);
	int m,k;
	char c;
	scanf("%d",&m);
	while(m--)
	{
		scanf("%d",&k);
		cin>>c;
		int j=v[c-'a'][k-1];
		s[j]='*';
		v[c-'a'].erase(v[c-'a'].begin()+k-1);
	}
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!='*')
		cout<<s[i];
	}
	return 0;
}
