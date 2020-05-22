#include<bits/stdc++.h>
using namespace std;
#define ll lomg long int 
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	int a[n],i;
    	vector<int>v;
    	for(i=0;i<n;i++)
    	cin>>a[i];
    	v.push_back(a[0]);
    	for(i=1;i<n;i++)
    	{
    		if(a[i]>=v[v.size()-1])
    		v.push_back(a[i]);
    		else
    		{
    			int j=upper_bound(v.begin(),v.end(),a[i])-v.begin();
    			v[j]=a[i];
    		}
    	}
    	cout<<v.size()<<" ";
    	for(i=0;i<v.size();i++)
    	cout<<v[i]<<" ";
    	cout<<endl;
    }
    
    return 0;
}
