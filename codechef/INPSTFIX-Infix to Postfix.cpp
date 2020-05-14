#include <bits/stdc++.h>
using namespace std;
int f(char c)
{
	if(c=='^')
	return 3;
	else if(c=='*'||c=='/')
	return 2;
	else if(c=='+'||c=='-')
	return 1;
	else 
	return 0;
}
int main()
{
	int t,n,i;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		stack<char>p;
		for(i=0;i<n;i++)
		{
			if(s[i]>='A'&&s[i]<='Z')
			cout<<s[i];
			else if(s[i]==')')
			{  
				while(p.top()!='(')
				{
					cout<<p.top();
				    p.pop();
				}
				p.pop();
			}
			else if(s[i]=='(')
			p.push(s[i]);
			else 
			{
				while(!p.empty()&&f(s[i])<=f(p.top()))
				{
					cout<<p.top();
					if(!p.empty())
				    p.pop();
				}
			p.push(s[i]);
			}
		}
		while(!p.empty())
		{
			cout<<p.top();
			p.pop();
		}
		cout<<endl;
	}
	return 0;
}
