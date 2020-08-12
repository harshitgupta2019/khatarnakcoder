#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define lli long long int
using namespace std;
lli res;

int main()
{
    lli a , b , t , res , x;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        lli d = b - a;
        
        lli res = 0;
        lli f   = 1;
        
        for(int i=0;i<32;i++)
        {
            if(d > (f << i)) continue;
            else
            {
                if((a & (f << i)) && (b & (f << i)))
                res += f << i;
            }
        }
        
        cout<<res<<endl;
    }
}
