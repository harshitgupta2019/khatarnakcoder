#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int n;
	cin>>n;
	long long int a[n],i,j,m;
	string s;
	for(i=0;i<n;i++)
	cin>>a[i];
	i=0;
	j=n-1;
	m=-1;

	
//	cout<<i<<" "<<j<<endl;
	while(i<=j&&a[i]!=a[j])
	{
		
	 if(m<a[j]&&a[j]>a[i])
	{
		if(a[i]>m)
		{
		m=a[i];
		i++;
		s+='L';	
		}
		else
	{
		m=a[j];
		j--;
		s+='R';
	}
	}
	else if(a[i]>m&&a[i]>a[j])
	{
		if(a[j]>m)
		{
			m=a[j];
		j--;
		s+='R';
		}
		else
		{
			m=a[i];
		i++;
		s+='L';
		}
	}
	else
	break;
	}
//	cout<<i<<" "<<j;
	if(i==j&&a[i]>m)
	{
		s+='L';
		i++;
	}
	else if(i<j&&a[i]==a[j]&&a[i]>m)
	{
		int m1=m;
		int m2=m;
		string s1=s;
		string s2=s;
		int k;
		for(k=i;k<=j;k++)
		{
			if(a[k]>m1)
			{
				m1=a[k];
				s1+='L';
			}
			else
			break;
			
		}
		for(k=j;k>=i;k--)
		{
			if(a[k]>m2)
			{
				m2=a[k];
				s2+='R';
			}
			else
			break;
		}
		if(s1.length()>s2.length())
		{
			s=s1;
		}
		else
		s=s2;
	}
	cout<<s.length()<<endl;
	cout<<s;
	
	return 0;
}
