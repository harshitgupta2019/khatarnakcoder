#include <iostream>
using namespace std;

int main() {
	int n,i,c=0,d=0,c1=0,d1=0;
	string s;
	
	cin>>n;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(i%2!=0)
		{
        if(s[i]=='b')
            c++;
        else
            d++;
       }
       else
       {
        if(s[i]=='r')
            c1++;
        else
            d1++;
       }
       
	}
//	cout<<c<<c1<<d<<d1;
	cout<<min(max(c,c1),max(d,d1));
	return 0;
}
