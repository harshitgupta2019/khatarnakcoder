#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t,n;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int res=0;
		long long int f[32]={0},i;
		while(n--)
		{
		cin>>s;
		int m=0;
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]=='a')m=m|(1<<0);
			if(s[i]=='e')m=m|(1<<1);
			if(s[i]=='i')m=m|(1<<2);
			if(s[i]=='o')m=m|(1<<3);
			if(s[i]=='u')m=m|(1<<4);
		}
		f[m]++;
		}
		for(i=1;i<32;i++)
		{
			for(int j=i+1;j<32;j++)
			{
				if((i|j)==31)
				res+=f[i]*f[j];
			}
		}
		res+=(f[31]*(f[31]-1))/2;
		cout<<res<<endl;
	}
	return 0;
}
