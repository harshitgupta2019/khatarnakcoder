#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,k,n;
	cin>>t;
	while(t--)
	{
		int x;
		cin>>k>>n;
	priority_queue<int,vector<int>,greater<int>> q;
	while(n--)
	{
		cin>>x;
		if(q.size()+1==k)
		{
			q.push(x);
			cout<<q.top()<<" ";
			
		}
		else if(q.size()<k)
		{
			q.push(x);
			cout<<-1<<" ";
		}
		else
		{
			if(x>q.top())
			{
				q.pop();
				q.push(x);
			}
			cout<<q.top()<<" ";
		}
		
	}
	cout<<endl;
	}
	return 0;
}
