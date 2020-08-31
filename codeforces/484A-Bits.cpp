#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t; 
    cin>>t;
    while(t--)
    {
        long long int l,r; 
        cin>>l>>r;
        long long int c = 1;
        for(int i = 0; i < 63; i++)
        {
            if((l | c) > r)
            break;
            l |= c;
            c <<= 1;
            cout<<l<<" "<<c<<endl;
        }
        cout<<l<<endl;
    }
    return 0;
}
