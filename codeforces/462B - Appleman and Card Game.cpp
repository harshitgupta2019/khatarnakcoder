#include<bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main()
{

    ll i,j,k;
    ll n;
    string s;
    map<char,ll> cs;

    cin>>n>>k;
    cin>>s;

    for(i=0;i<s.length();i++)
        cs[s[i]]++;

    vector<ll> v;
    map<char,ll>::iterator p=cs.begin();
    while(p!=cs.end())
    {
        v.push_back(p->second);
        p++;
    }

    ll count=0;
    sort(v.begin(),v.end(),greater<ll>());

    i=0;
    while(k>0 && i<v.size())
    {
        if(v[i]>k)
        {
            count+=(k*k);
            break;
        }

        else
        {
            k-=v[i];
            count+=(v[i]*v[i]);
        }

        i++;
    }

    cout<<count;

    return 0;
}
