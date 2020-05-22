#include<iostream>
using namespace std;
long long int c=0;
void merge(int arr[],int l,int mid,int u)
{
	int temp[u-l+1];
	int i=l,j=mid+1,k=0;
	while(i<=mid&&j<=u)
	{
		if(arr[i]>arr[j])
		{
			temp[k]=arr[j];
			j++;
			k++;
			c+=mid-i+1;
			
			
			
		}
		else
		{
			temp[k]=arr[i];
			i++;
			k++;
			
		}
	}
	while(i<=mid)
	{
		temp[k]=arr[i];
		k++;
		i++;
	}
	while(j<=u)
	{
		temp[k]=arr[j];
		k++;
		j++;
	}
	for(i=l,j=0;j<k;i++,j++)
	{
		arr[i]=temp[j];
	}
	
}
void mergesort(int arr[],int l ,int u)
{
	if(l<u)
	{
		int mid=(l+u)/2;
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,u);
		merge(arr,l,mid,u);
		
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	mergesort(a,0,n-1);
	cout<<c<<endl;
}
