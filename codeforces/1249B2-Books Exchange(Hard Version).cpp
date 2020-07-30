#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	long long int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n],i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			--a[i];
		}
		vector<int> u(n);
		vector<int> ans(n);
		for (int j = 0; j < n; ++j) 
		{
			if (!u[j]) 
			{
				vector<int> c;
				while (!u[j]) 
				{
					c.push_back(j);
					u[j] = true;
					j = a[j];
				}
				for (int u : c) 
				ans[u] = c.size();
			}
		}
		for (int j = 0; j < n; ++j) 
		cout << ans[j] << " ";
		cout << endl;
	}
	return 0;
}
