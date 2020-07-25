#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	stack<char>st;
	int n=s.length(),c=0;
	for(int i=0;i<n;i++)
	{
		if(st.empty())
		st.push(s[i]);
		else
		{
			if(s[i]==st.top())
			{
				st.pop();
				c++;
			}
			else
			st.push(s[i]);
		}
	}
	if(c%2==0)
	cout<<"No"<<endl;
	else
	cout<<"Yes"<<endl;
	return 0;
}
