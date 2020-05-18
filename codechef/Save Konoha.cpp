#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int c[10001]={0};
		long long int a[n],i,ans=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			c[a[i]]++;
		}
		for(i=10000;i>0;i--)
		{
			while(k>0&&c[i]!=0)
			{
				k=k-i;
				c[i/2]++;
				c[i]--;
				ans++;
			}
			if(k<=0)
			break;
		}
        if(k<=0)
		cout<<ans<<endl;
		else
		cout<<"Evacuate"<<endl;
	}
	return 0;
}
