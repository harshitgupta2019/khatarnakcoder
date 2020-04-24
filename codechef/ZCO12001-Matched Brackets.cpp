#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],i,l=0,len=0,m=0,first=0,second=0;
	for(i=0;i<n;i++)
	cin>>a[i];
	stack<int>s;
	for(i=0;i<n;i++)
	{
		l++;
		if(a[i]==1)
		s.push(a[i]);
		else
		{
			if(s.size()>m)
			{
				m=s.size();
				first=i;
			}
			s.pop();
			if(s.empty())
			{
				if(l>len)
				{
					len=l;
					second=i-len+2;
				}
				l=0;
			}
		}
	}
	cout<<m<<" "<<first<<" "<<len<<" "<<second;
	return 0;
}
