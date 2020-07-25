#include <bits/stdc++.h>
using namespace std;
string f(string s)
{
	int sz=s.size();
	if(sz%2==1)return s;
	string hl=f(s.substr(0,sz/2));
    string hr=f(s.substr(sz/2,sz/2));
    return hl<hr ?hl+hr :hr+hl ;
}
int main()
{
	string a,b;
	cin>>a>>b;
	if(f(a)==f(b))
	cout<<"YES"<<endl;
	else
	{
cout<<"NO"<<endl;
	}
	
	return 0;
}
