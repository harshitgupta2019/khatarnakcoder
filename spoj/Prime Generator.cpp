#include <bits/stdc++.h>
using namespace std;
vector<long long int>prime;
void sieve(long long int n)
{
	vector<long long int> ar(n + 1 , 0);
	ar[1] = 1;
 
	for(int i=2;i<=n;i++)
	if(ar[i] == 0)
	{
		for(int j=2*i;j<=n;j+=i)
		ar[j] = 1;
	}
 
	for(int i=1;i<=n;i++)
	if(ar[i] == 0)
	prime.push_back(i);
}
void init(long long int a,long long int b)
{
	if(a==1)a++;
	long long int m=b-a+1;
	vector<long long int>ar(m,0);
	for(long long int p:prime)
	{
		if(p*p<=b)
		{
			long long int i=(a/p)*(p);
			if(i<a)i+=p;
			for(;i<=b;i+=p)
			{
				if(i!=p)
				ar[i-a]=1;
			}
		}
	}
	for(int i=0;i<m;i++)
	if(ar[i] == 0)
	cout<<a + i<<endl;
}
int main() 
{
	sieve(100000);
	long long int n,m,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		init(n,m);
		cout<<endl;
	}
	return 0;
}
