#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,k,m,ans=1,p;
	cin>>n>>k;
	long long int a[n],i;
	for(i=0;i<n;i++)
	cin>>a[i];
	stack<long long int>s;
	
	for(i=n-1;i>=0;i--)
	{
		while(!s.empty()&&a[i]<=a[s.top()])
		{
		    s.pop();
		}
		if(!s.empty())
		ans*=s.top()-i+1;
		s.push(i);
		ans=ans%1000000007;
	}
	cout<<ans%1000000007;
	return 0;
}
