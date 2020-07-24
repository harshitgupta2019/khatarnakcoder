#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string s[2];
 
    int n = 2;
    int m;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        m = s[i].length();
    }
    int ans = 0;
    int p = 0;
    for (int i = 0; i < m; i++) 
    {
        int c = (s[0][i] == '0') + (s[1][i] == '0');
 
        if (c == 0)
            p = 0;
 
        if (c == 1) {
            if (p == 2)
            {
                ans++;
                p = 0;
            }
            else
                p = 1;
        }
 
        if (c == 2) 
        {
            if (p > 0) 
            {
                ans++;
                if (p == 2)
                    p = 1;
                else
                    p = 0;
            }
            else
                p = 2;
        }
    }
 
    cout << ans;
}
