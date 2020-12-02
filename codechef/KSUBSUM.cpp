#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll k1,k2,k3;
ll temp[5000],csum[5000],bsum[5000],psum[5000],arr[10005];
void merge(ll* a,ll p1,ll *b,ll p2)
{
    ll k=0,p=1,q=1;
    while(k<=k3 && p<=p1 && q<=p2)
    {
        if(a[p]>b[q]) temp[++k]=a[p++];
        else    temp[++k]=b[q++];
    }
    while(k<=k3 && p<=p1) temp[++k]=a[p++];
    while(k<=k3 && q<=p2) temp[++k]=b[q++];
    for(ll i=1;i<=k;i++) b[i]=temp[i];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n >> k1 >> k2 >> k3;
        
        ll sum=0;
        ll p1=1;
        psum[p1]=0;
        ll p3=0;
        for(ll i=1;i<=n;i++)
        {
            cin >> arr[i];
            sum+=arr[i];
            
            for(ll j=1;j<=p1;j++)
                csum[j]=sum-psum[j];
            merge(csum,p1,bsum,p3);
            p3=min(k3,p1+p3);
            
            ll j;
            for(j=p1+1;j>1 && sum<psum[j-1];j--)
                psum[j]=psum[j-1];
            //    cout<<j<<" ";
            psum[j]=sum;
            p1=min(k3,p1+1);
        }
        
        cout << bsum[k1] << " " << bsum[k2] << " "<< bsum[k3] << endl;
    }
}
