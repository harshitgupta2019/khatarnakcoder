#include <iostream>
using namespace std;

int main() 
{
	string s;
	int n,k,i,j,c=0,s1=0;
	cin>>s>>k;
	n=s.length();
	for(i=0;i<n;i++)
	{
		if(s[i]=='?') 
		c++;
		if(s[i]=='*') 
		s1++;
		
	}
	int c1,size=n-(c+s1);
	if(size==k)
	{
		for(i=0;i<n;i++)
		{
			if(s[i]!='?'&&s[i]!='*')
			cout<<s[i];
		}
	}
	else if(size<k&&s1>0)
	{
		int c1;
         for(int i=0;i<n;i++){
             if(s[i]=='?') 
             s[i]='#';
             if(s[i]=='*')
             {
                 if(size<k){
                     c1=k-size;
                     s[i]='!';
                     size=k;
                 }
                 else{
                     s[i]='#';
                 }
             }
         }
         for(int i=0;i<n;i++){
             if(s[i]!='#')
             {
                 if(s[i]=='!'){
                     for(int j=0;j<c1;j++)
                         cout<<s[i-1];
                 }
                 else cout<<s[i];
             }
         }
         cout<<endl;
		
	}
	else if(size>k&&size-(c+s1)<=k)
	{
		for(i=0;i<n;i++)
		{
			if((s[i]=='?'||s[i]=='*')&&size>k)
			{
				s[i]='#';
				s[i-1]='#';
				size--;
			}
			else if(s[i]=='?'||s[i]=='*')
			s[i]='#';
		}
		for(i=0;i<n;i++)
		{
			if(s[i]!='#')
			cout<<s[i];
		}
	}
	else
	cout<<"Impossible";
	
	return 0;
}
