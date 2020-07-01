#include <bits/stdc++.h>
using namespace std;
vector<char>ar[1001];
bool bfs(char c,char d )
{
	
	queue<char>q;
	q.push(c);
	int vis[26]={0};
	vis[c-'0'-49]=1;
	while(!q.empty())
	{
		char ch=q.front();
		q.pop();
		for(char a:ar[ch])
		{
			if(a==d)return true;
			if(vis[a-'0'-49]==0)
			q.push(a),vis[a-'0'-49]=1;
		}
	}
	return false;
}
int main() {
	int tc;
	cin>>tc;
	string s,t;
	while(tc--)
	{
		cin>>s>>t;
		for(int i=0;i<1001;i++) ar[i].clear();
		if(s.length()!=t.length())
		{cout<<"NO"<<endl;
		continue;
			
		}
		int m,i,f=0;
		char a,b,c;
		cin>>m;
	
		while(m--)
		{
			cin>>a>>c>>c>>b;
			ar[a].push_back(b);
		}
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]!=t[i])
			{
				char ch=bfs(s[i],t[i]);
				if(ch==false){f=1;break;}
			}
		}
		if(f==1)cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
	
	return 0;
}
