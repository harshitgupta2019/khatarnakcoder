#include <bits/stdc++.h>
using namespace std;
priority_queue<int> d; //greater value at the top
priority_queue<int,vector<int>,greater<int> >u; //smallest value at the top

int main() 
{
	ios_base::sync_with_stdio(false);
long long int t,x,n,p,s=0;
cin>>t;
while(t--)
{
	cin>>n;
	if(n==1)
	{
		cin>>x;
		if(u.size()==0||x>u.top())
		u.push(x);
		else
		d.push(x);
		s++;
		if(u.size()==s/3&&s==3)
		{
				 p=u.top();
			u.pop();
			d.push(p);
		}
		while(u.size()<s/3)
		{
	 p=d.top();
		 d.pop();
		 u.push(p);
		}
		while(u.size()>s/3)
		{
			 p=u.top();
			u.pop();
			d.push(p);
		}
	}
	else
	{
		if(s/3==0)
		cout<<"No reviews yet"<<endl;
		else
		cout<<u.top()<<endl;
	}
}
	return 0;
}
