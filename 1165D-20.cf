#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int a[n],i,j=0,k=0;
		for(i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		vector<long long int>b;
		long long int ans=a[0]*a[n-1];
		for(i=2;i<=sqrt(ans);i++)
		{
			if(ans%i==0)
			{
				b.push_back(i);
				j++;
				if(i!=ans/i)
				{
				    b.push_back(ans/i);
					j++;
				}
			
			}
			
		}
		sort(b.begin(),b.end());
		for(i=0;i<n,i<j;i++)
		{
			if(a[i]!=b[i]){
				k=1;
				break;
			}
		}
		
		
		if(k==1)
		cout<<-1<<endl;
		else
		cout<<ans<<endl;
		
	}
	return 0;
}
