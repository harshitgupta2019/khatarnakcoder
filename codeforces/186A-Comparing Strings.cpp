#include <iostream>
using namespace std;

int main() {
	int c=0;
	string s1,s2;
	cin>>s1>>s2;
	int a[s1.size()],j=0;
	if(s1.size()!=s2.size())
	cout<<"NO"<<endl;
	else
	{
		for(int i=0;i<s1.size();i++)
		{
			if(s1[i]!=s2[i])
			{
				c++;
				a[j++]=i;
			}
		}
		if(c==2)
		{
			if((s1[a[0]]!=s2[a[1]])||(s2[a[0]]!=s1[a[1]]))
			cout<<"NO"<<endl;
			else
			cout<<"YES"<<endl;
		}
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
