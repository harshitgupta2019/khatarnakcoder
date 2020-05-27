#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,q;
		cin>>n>>q;
		long long int a[n],b[n],i,x,p[q],j;
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n;i++)
		cin>>b[i];
		for(i=0;i<q;i++)
		{
			cin>>p[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		vector<long long int>sum;
		if(n<=100)
		{
			for( i=0;i<n;i++)
        {
            for( j=0;j<n;j++)
            {
                sum.push_back(a[i]+b[j]);
            }
        }
		}
		else
		{
			long long int s=a[100]+b[100];
			for(i=0;i<n;i++)
			{
				for(j=0;j<n&&a[i]+b[j]<=s;j++)
				sum.push_back(a[i]+b[j]);
			}
		}
        sort(sum.begin(),sum.end());
        for(i=0;i<q;i++)
        cout<<sum[p[i]-1]<<endl;
		
	}
	return 0;
}
