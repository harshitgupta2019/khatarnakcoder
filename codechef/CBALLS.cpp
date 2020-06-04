#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int isPrime[10001]={0};
	for(int i=2;i*i<=10000;i++)
	{
		if(isPrime==0)
		{
			for(int j=2*i;j<=10000;j+=i)
			{
				isPrime[j]=1;
			}
		}
	}
	int t;
	cin>>t;	
	while(t--)
	{
		int n;
		cin>>n;
		
		int a[n];
		int i,j;
		int count=0;
		
		cin>>a[0];
		for(i=1;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<a[i-1])
			{
				count+=a[i-1]-a[i];
				a[i]=a[i-1];
			}		
		}
		int balls,ans=INT_MAX;
		for(i=2;i<=10000;i++)
		{
			balls=0;
			if(isPrime[i]==0)
			{
				for(j=0;j<n;j++)
				{
					if(a[j]%i!=0)
					{
						balls+=i-(a[j]%i);
					}
					if(balls>ans)
						break;
					
				}
				
			}
			
			ans=min(ans,balls);
		}
		
		cout<<ans+count<<endl;
	}
	
	return 0;
}
