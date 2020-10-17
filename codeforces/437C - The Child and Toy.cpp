#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>
#define inf 10000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;
    int u,v,sum=0;

    cin>>n>>m;

    int a[n+1];
    for(i=1;i<=n;i++)
        cin>>a[i];

    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        sum+=min(a[u],a[v]);
    }

    cout<<sum;

    return 0;
}
