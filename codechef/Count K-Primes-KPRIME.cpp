#include <iostream>
using namespace std;

int main() {
	int t,a,b,k;
	int l=100001,i,j;
    int sv[l]={0};
    int ks[l]={0};
    for(i=2;i<l;i++)
    {
        if(sv[i]==0)
        {
            ks[i]++;
            for(j=i+i;j<l;j+=i)
            {
                sv[j]=1;
                ks[j]++;
            }
        }
    }
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>k;
		int ans=0;
		for(i=a;i<=b;i++)
		{
			if(ks[i]==k)
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
