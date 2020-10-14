#include <iostream>
using namespace std;
int a, m, n = 102, b[105], ina, inb, ans;
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> b[i];
        if (m < b[i]) {
            m = b[i];
            ina = i;
        }
        if (n >= b[i]) {
            n = b[i];
            inb = i;
        }
    }
    ans = ina + (a - inb - 1);
    if (ina > inb) {
        ans--;
    }
    cout << ans;
}
