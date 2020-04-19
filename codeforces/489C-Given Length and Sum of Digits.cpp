#include <iostream>
using namespace std;

int main() {
	int m,n,i;
	cin>>m>>n;
	string s,s1;
	if(n==0)
	{
		if(m==1)
		cout<<"0 0"<<endl;
		else
		cout<<"-1 -1"<<endl;
		return 0;
	}
	for(i=0;i<m;i++)
	{
		int t=min(n,9);
		s+=t+'0';
		n-=t;
	}
	if(n>0)
	{
		cout<<"-1 -1";
		return 0;
	}
	for(i=m-1;i>=0;i--)
	{
		s1+=s[i];
	}
	for(i=0;i<m;i++)
	{
		if(s1[i]!='0')
		{
			break;
		}
	}
   s1[0]++;
   s1[i]--;
	cout<<s1<<" "<<s;
	return 0;
}
