#include <iostream>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	int a[n],i,s=0,j=0,s1=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(i=0;i<k;i++)
	s+=a[i];
	s1=s;
	for(i=1;i<=n-k;i++)
	{
		s=s-a[i-1]+a[i+k-1];
		if(s<=s1)
		j=i,s1=s;
		
	}
	cout<<j+1;
	
	return 0;
}
