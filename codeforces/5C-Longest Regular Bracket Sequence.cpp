#include <bits/stdc++.h>
using namespace std;
int S[1000001],e[1000001],f[1000001];
int main()
{
	string s;
	cin>>s;
	int n=s.length(),ans=0;
	stack<int>st;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='(')
		st.push(i);
		else 
		{
			if(st.empty())
			S[i]=e[i]=-1;
			else
			{
			S[i]=e[i]=st.top();
			if(st.top()>0&&S[st.top()-1]>=0&&s[st.top()-1]==')')
			e[i]=e[st.top()-1];
			st.pop();
			int l=i-e[i]+1;
			f[l]++;
			ans=max(ans,l);
			}
		}
	}
	f[0]=1;
	cout<<ans<<" "<<f[ans]<<endl;
	return 0;
}
