#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, c[8] = {0};
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>x;
        c[x] += 1;
    }
    if (c[5] == 0 && c[7] == 0 && c[2] >= c[4] && c[1] == c[4] + c[6] && c[2] + c[3] == c[4] + c[6])
    {
        for (int i = 0; i < c[4]; ++i)
        {
            cout<<"1 2 4"<<endl;
        }
        c[2] -= c[4];
        for (int i = 0; i < c[2]; ++i)
        {
            cout<<"1 2 6"<<endl;
        }
        for (int i = 0; i < c[3]; ++i)
        {
            cout<<"1 3 6"<<endl;
        }
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}
