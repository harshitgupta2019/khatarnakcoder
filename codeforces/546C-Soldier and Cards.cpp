#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,m,x,c=0;
	cin>>t;
	cin>>n;

	queue<int>a;
	queue<int>b;
	for(int i=0;i<n;i++)
	{
		cin>>x;
	a.push(x);
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>x;
		b.push(x);
	}
	while(!a.empty()&&!b.empty())
	{
		c++;
		if(c>1000)
		{
			cout<<-1<<endl;
			return 0;
		}
		int t1=a.front();
		int t2=b.front();
		a.pop();
		b.pop();
		if(t1>t2)
		{
			a.push(t2);
			a.push(t1);
		}
		else
		{
			b.push(t1);
			b.push(t2);
		}
	}
	cout<<c<<" "<<((a.size()==0)?2:1);
	return 0;
}
