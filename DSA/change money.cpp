#include <iostream>
using namespace std;
int main() 
{
	int n,i,j;
	cin>>n;
	int coins[3]={1,3,4};
	int a[3][n+1];
	a[0][0]=0;
	a[1][0]=0;
	a[2][0]=0;
	for(j=1;j<=n;j++)
	{
		if(j%coins[0]==0)
		a[0][j]=j/coins[i];
		else
		a[0][j]=0;
	}
	for(i=1;i<3;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(coins[i]>j)
			a[i][j]=a[i-1][j];
			else
			{
				a[i][j]=min(a[i-1][j],1+a[i][j-coins[i]]);
			}
	//		cout<<a[i][j]<<" ";
		}
	//	cout<<endl;
	}
	cout<<a[2][n];
	
	return 0;
}
