#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n; cin>>n;
    vector<pair<long, long> > a(n);
    for(long i = 0; i < n; i++)
    {
    	cin>>a[i].first; 
    a[i].second = i;
    }
    sort(a.begin(), a.end());
    vector<bool> used(n, 0);
    vector<long> rank(n);
    for(long i = 0; i < n; i++)
    rank[i] = a[i].second;
     vector<std::vector<long> > s;
    for(long i = 0; i < n; i++){
        if(used[i])continue;
        long cur=i;
      vector<long> v;
        while(!used[cur])
        {
            v.push_back(cur);
            used[cur] = 1;
            cur = rank[cur];
        }
        s.push_back(v);
    }
    cout<<s.size()<<endl;
    for(long i = 0; i < s.size(); i++)
    {
        cout<<s[i].size()<<" ";
        for(long j = 0; j < s[i].size();j++)
        cout<< 1 + s[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
