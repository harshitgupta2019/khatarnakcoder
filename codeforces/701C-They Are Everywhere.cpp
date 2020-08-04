#include<bits/stdc++.h>
#define inf 0x3f3f3f3f
using namespace std;

map<int,int> st; 

int a[100001];
int main(){
	int n;
	cin>>n;
	char c;
	set<int> s;
	for(int i=0;i<n;i++)
	{
		cin>>c;
	    a[i] = c-'A'+1;
		s.insert(a[i]);
	}
	int cnt = s.size();
	s.clear();
	
	int s1 = 0,t=0,sum=0;
	int res = inf;
	while(1)
	{
	   while(sum < cnt && t < n)
	   {
	   	if(st[a[t++]]++==0)
	   		sum++;
	   }
	   if(sum<cnt)
	   break;
	   res = min(res,t-s1);
	   if(--st[a[s1++]]==0)
	   	sum--;
	   	cout<<sum;
	}
	cout<<res<<endl;
	return 0;
}
