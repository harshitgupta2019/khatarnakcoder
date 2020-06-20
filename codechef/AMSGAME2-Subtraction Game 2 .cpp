#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main() 
{   fast
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
          cin >> a[i];
        int div[10005] = {0};
        for (int i = 0; i < n; i++) {
            for (int j = 1; j * j <= a[i]; j++)
            {
                if (a[i] % j == 0)
                {
                    div[j]++;
                    if (j * j != a[i]) 
                    div[a[i] / j]++;
                }
            }
        }
        long long int gcd[10005] = {0};
        for (int i = 10000; i > 0; i--) {
            if (div[i]!=0) {
                gcd[i] = (1LL << div[i]) - 1;
                for (int j = 2; j <= 10000 / i; j++) {
                    gcd[i] =gcd[i]- gcd[j * i];
                }
            }
        }
        cout << gcd[1] <<endl;
    }
}
