#include <bits/stdc++.h>
using namespace std;
#define N 16
int b[1<<N], c[1<<N];
int a[N];
int main()
{
	int t;
	cin >> t;
	while(t--) 
	{
		int n;
		cin >> n;
		int m = 1 << n;
		for(int i=0; i<m; i++)
			cin >> b[i];
		sort(b, b+m);
		multiset <int> s; 
		int c_p=0,p_p=0;
		for(int i=1;i<m;i++)
		{
			if(!s.empty()&&b[i]==*s.begin())
			s.erase(s.begin());
			else
			{
				a[c_p]=b[i];
				int m_p=p_p;
				for(int j=0;j<m_p;j++)
				{
					c[p_p]=c[j]+a[c_p];
					s.insert(c[p_p]);
					p_p++;
				}
				c[p_p++]=a[c_p++];
			}
		}
		
		for(int i=0; i<c_p; i++)
		cout<<a[i]<<" ";
		cout<<endl;
	}
}
