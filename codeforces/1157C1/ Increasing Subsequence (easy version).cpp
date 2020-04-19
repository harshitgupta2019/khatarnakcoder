#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n],i,j,m;
	string s;
	j=n-1;
	for(i=0;i<n;i++)
	cin>>a[i];
	i=0;
	if(a[i]<a[j])
	{
		i++;
		m=a[0];
		s+='L';
	}
	else if(a[i]>a[j])
	{
		j--;
		m=a[n-1];
		s+='R';
	}
	else
	{
		if(a[i+1]>a[j-1])
		{
			i++;
			m=a[0];
			s+='L';
		}
		else
		{
			j--;
			m=a[n-1];
			s+='R';
		}
	}
	
	while(i-1!=j)
	{
	 if(a[i]==a[j]&&a[i]>m)
	{
		if(a[i+1]>a[j-1])
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
	else if(m<a[j]&&a[j]>a[i])
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
	cout<<s.length()<<endl;
	cout<<s;
	
	return 0;
}
