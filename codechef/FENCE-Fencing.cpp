#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  int t,n,m,i,j,k,l,r,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        vector <long int> v;
        for(i=0;i<k;i++)
        {
            cin>>r>>c;
            v.push_back((r-1)*m+c);
        }
        sort(v.begin(),v.end());
        l=v.size();
        j=k*4;
        int x,y;
        for(i=0;i<l-1;i++)
        {
             x=binary_search(v.begin(),v.end(),v[i]+1);
             y=binary_search(v.begin(),v.end(),v[i]+m);
            if(y==1)j-=2;
            if((x==1)&&(v[i]%m!=0))j-=2;
            
        }
        cout<<j<<endl;
    }
    return 0;
}
