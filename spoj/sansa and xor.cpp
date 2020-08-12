#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli ar[100001];

int main()
{
    lli t , n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(lli i=1;i<=n;i++) cin>>ar[i];
        
        lli c;
        lli ans = 0;
        for(lli i=1;i<=n;i++)
        {
            c = (i) * (n - i + 1);
            if(c % 2) ans ^= ar[i];
        }
        
        cout<<ans<<endl;
    }
}
