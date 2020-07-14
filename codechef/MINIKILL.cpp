#include <bits/stdc++.h>
using namespace std;
vector<int>ar[1000001];
int dfs(int node,int par)
{
	int sum=0,c=0;
	if(ar[node].size()<=1&&par!=0)
	return 0;
	for(int i:ar[node])
	{
		if(i!=par)
		{
			int s=dfs(i,node);
			{
			//	cout<<i<<" "<<node<<" "<<s<<endl;;
			sum+=s;
			}
			if(s==0)
			c++;
			
		}
	}
	if(sum==0)
	return c-1;
	return sum+c;
}
int main()
{
	int n,x,y;
	cin>>n;
	n=n-1;
	while(n--)
	{
		cin>>x>>y;
		ar[x].push_back(y);
		ar[y].push_back(x);
	}
	cout<<max(1,dfs(1,0))<<endl;
	return 0;
}
