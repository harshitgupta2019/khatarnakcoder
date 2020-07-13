 #include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,a,b;
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b;
		stack<int>v;
		if(a>b)
		swap(a,b);
		int c=0,d=1;
		while(a!=b)
		{
			if(b>a)
			{
				v.push(b%2);
				d*=2;
				b/=2;
			}
			else
			a/=2;
		}
		while(!v.empty())
		{
			c=c*2+v.top();
			v.pop();
		}
		if(n>=c)
		n=(n-c)/d;
		cout<<n<<endl;
	}
	return 0;
}
