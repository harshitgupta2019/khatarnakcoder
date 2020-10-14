#include <iostream>
using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;
    int min(p), max(p), ans(0);
    while (--n)
    {
        cin >> p;
        if (p < min)
        {
            min = p;
            ++ans;
        }
        if (p > max)
        {
            max = p;
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}
