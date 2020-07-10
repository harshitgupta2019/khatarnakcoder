#include <bits/stdc++.h>
using namespace std;
int ar[100001];
pair<int,int>st[400001];
void build(int si,int ss,int se)
{
	if(ss==se)
	{
	  if(ar[ss]%2==1)
	  st[si]={1,0};
	  else
	  st[si]={0,1};
	return;
	}
	int mid=(ss+se)/2;
	build(2*si,ss,mid);
	build(2*si+1,mid+1,se);
	st[si].first=st[2*si].first+st[2*si+1].first;
	st[si].second=st[2*si].second+st[2*si+1].second;
}
void update(int si,int ss,int se,int qi,int val)
{
if(ss==se)
{
	if(ar[ss]%2==0)
	{
		st[si]={1,0};
	}
	else
	st[si]={0,1};
	ar[ss]=val;
	return;
}
int mid=(ss+se)/2;
if(qi<=mid)
update(2*si,ss,mid,qi,val);
else 
update(2*si+1,mid+1,se,qi,val);
st[si].first=st[2*si].first+st[2*si+1].first;
	st[si].second=st[2*si].second+st[2*si+1].second;
}
int even(int si,int ss,int se,int qs,int qe)
{
	if(qs>se||qe<ss)return 0;
	if(ss>=qs&&se<=qe)
	return st[si].second;
	int mid=(ss+se)/2;
	int l=even(2*si,ss,mid,qs,qe);
	int r=even(2*si+1,mid+1,se,qs,qe);
	return l+r;
}
int odd(int si,int ss,int se,int qs,int qe)
{
	if(qs>se||qe<ss)return 0;
	if(ss>=qs&&se<=qe)
	return st[si].first;
	int mid=(ss+se)/2;
	int l=odd(2*si,ss,mid,qs,qe);
	int r=odd(2*si+1,mid+1,se,qs,qe);
	return l+r;
}
int main() {
	int n,q,l,r,i,c;
	cin>>n;
	for( i=1;i<=n;i++)
	cin>>ar[i];
	build(1,1,n);
	cin>>q;
	while(q--)
	{
		cin>>c>>l>>r;
		if(c==0)
		{
           if(ar[l]%2==r%2)continue;
		   else
		   update(1,1,n,l,r);
		}
		if(c==1)
		{
             cout<<even(1,1,n,l,r)<<endl;
		}
		if(c==2)
		{
			cout<<odd(1,1,n,l,r)<<endl;

		}
	}
	return 0;
}
