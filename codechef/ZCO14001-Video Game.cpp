#include <iostream>
using namespace std;

int main() 
{
	long long int n,h,a;
	cin>>n>>h;
	long long int a1[n],i;
	for(i=0;i<n;i++)
	cin>>a1[i];
	int p=0;
	i=0;
	while(cin>>a)
    {
    	
        if(a==0)
        break;
        if(a==1) 
        {
            if(i!=0) 
             i--;
        }
        else if(a==2)
        {
            if(i!=n-1) 
             i++;
        }
        else if(a==3 && p==0)
        {
            if(a1[i]>0)
            {
            a1[i]--;
            p=1;
            }
        }
        else if(a==4 && p==1)
        {
            if(a1[i]<h)
            {
            	a1[i]++;
                p=0;
            }
        }
    }
    
    for(i=0;i<n;i++)    
    cout<<a1[i]<<" ";

	return 0;
}
