#include <bits/stdc++.h>
using namespace std;
int f(int a,int b)
{
	return to_string(a) + to_string(b) > to_string(b) + to_string(a);
    
}

int main() {
	int n;
	cin>>n;
	int a[n],i;
	string s;
	
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n,f);
	for(i=0;i<n;i++)
	{
		s+=to_string(a[i]);
	}
	if(s[0]=='0')
	cout<<0<<endl;
	else
	cout<<s;
	
	return 0;
}
