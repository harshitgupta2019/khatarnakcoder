#include <iostream>

using namespace std;

int main()
{
    int n, a, c0=0, e0=0, emax=-1;
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a == 1)
        {
            c0 += 1;
            if (e0 > 0)
            {
                e0 -= 1;
            }
        }
        else
        {
            e0 += 1;
            if (e0 > emax)
            {
                emax = e0;
            }
        }
    }
    cout << c0 + emax << endl;
    return 0;
}
