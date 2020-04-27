#include <iostream>
#include<stack>
using namespace std;

int main() 
{
	long long int n,i,ans=0;
	cin>>n;
	long long int a[n];
	stack<long long int>s;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
	    while (!s.empty())
	    {
	       ans=max(ans,a[i]^s.top()) ;
	       if(s.top()<a[i])
	       s.pop();
	       else
	       break;
	    }
	    s.push(a[i]);
	}
	cout<<ans;
	return 0;
}
