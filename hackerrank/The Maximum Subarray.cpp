#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n],i,s=0,ans=INT_MIN,sum=0,m=INT_MIN;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>0)
            s+=a[i];
            m=max(m,a[i]);
        }
        for(i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum>ans)
            ans=sum;
            if(sum<=0)
            sum=0;
        }
        if(s==0)
        {
            s=m;
            ans=m;
        }
        cout<<ans<<" "<<s<<endl;
    }
}
