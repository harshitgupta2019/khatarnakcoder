#include <bits/stdc++.h>
using namespace std;
#define ll int
ll gcd(ll a,ll b)
{
	if(b==0)
	return a;
	return gcd(b,a%b);
}
int main() {
	ll n,m;
	vector<ll>p[26];
	string s,s1;
	cin>>n>>s;
	for(int i=0;i<n;i++)
    p[s[i]-'a'].push_back(i+1);
    cin>>m;
    while(m--)
    {
    	cin>>s1;
    	int ans=-1;
    	int c[26]={0};
    	for(int j=0;j<s1.length();j++)
    	c[s1[j]-'a']++;
    	for(int j=0;j<26;j++)
    	{
    		if(c[j]>0)
    		{
    			ans=max(ans,p[j][c[j]-1]);
    		}
    	}
    	cout<<ans<<endl;
    	
    }
	return 0;
}
