#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a[100];
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
   sort(a, a + n);
    int c(1), max_c(1);
    for (int i = 1; i < n; ++i)
    {
        if (a[i] == a[i-1])
        {
            c += 1;
            if (c > max_c)
            {
                max_c = c;
            }
        }
        else
        {
            c = 1;
        }
    }
    cout << (max_c <= (n + 1) / 2 ? "YES" : "NO") << endl;
	return 0;
}
