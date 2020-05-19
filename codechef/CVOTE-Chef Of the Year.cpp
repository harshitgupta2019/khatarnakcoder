#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,m,i,j=-1;
	cin>>n>>m;
	map<string ,string>s;
	map<string,int>c;
	map<string,int>f;
	string x,y;
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		s[x]=y;
	}
	for(i=0;i<m;i++)
	{
		cin>>x;
		f[x]++;
		c[s[x]]++;
	}
	y="";
	for(auto i:c)
    {
        if(i.second>j)
        {
            j=i.second;
            y=i.first;
        }
        else if(i.second==j)
        {
            if(i.first<y)
                y=i.first;
        }
    }
    cout<<y<<endl;
    j=-1;
    y="";
    for(auto i:f)
    {
        if(i.second>j)
        {
            j=i.second;
            y=i.first;
        }
        else if(i.second==j)
        {
            if(i.first<y)
                y=i.first;
        }
    }
    cout<<y<<endl;
	return 0;
}
