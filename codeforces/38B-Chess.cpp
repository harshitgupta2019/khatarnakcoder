#include<bits/stdc++.h>
using namespace std; 
#define ll long long
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s,t;
	cin>>s>>t;
	int x=s[0]-'a'+1,y=s[1]-'0';
	int a=t[0]-'a'+1,b=t[1]-'0';
	int cnt=0;
	for(int i=1;i<=8;i++)
	{
		for(int j=1;j<=8;j++)
		{
			if((i!=a||j!=b)&&i!=x&&j!=y&&(i-x)*(i-x)+(j-y)*(j-y)!=5&&(i-a)*(i-a)+(j-b)*(j-b)!=5)
			{
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
	return 0;
}
	   	 		   			 		 		 		    	  	
