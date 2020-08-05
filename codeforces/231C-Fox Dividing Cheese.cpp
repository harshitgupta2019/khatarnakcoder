#include <bits\stdc++.h>
using namespace std;
int a,b,ans;
void check(int x)
{
	int z=0,y=0;
	while(a%x==0)
	{ a/=x; z++; }
	while(b%x==0)
	{ b/=x; y++; }
	ans+=abs(z-y);
}
int main(void)
{
	cin>>a>>b;
	check(2),check(3),check(5);
	if(a!=b)
		cout<<-1;
	else
		cout<<ans;
}
