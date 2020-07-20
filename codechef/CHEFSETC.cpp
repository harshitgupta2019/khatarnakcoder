#include <bits/stdc++.h>
using namespace std;

int t, a[4], sum;
bool f;

int main()
{
    cin>>t;
    while (t--)
    {
        for (int i = 0; i < 4; ++i)
            cin>>a[i];

        f = false;
        for (int bit = 1; bit < (1 << 4); ++bit){
            sum = 0;
            for (int i = 0; i < 4; ++i)
            if ((bit >> i) & 1)
                sum += a[i];
            if (sum == 0){
                f = true;
                break;
            }
        }
        printf(f ? "Yes\n" : "No\n");
    }
    return 0;
}
