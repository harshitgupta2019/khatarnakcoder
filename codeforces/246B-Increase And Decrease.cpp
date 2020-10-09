#include <iostream>
using namespace std;
int a, b, s = 0;
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> b;
        s += b;
    }
    if (s % a == 0) {
        cout << a;
    } else {
        cout << a - 1;
    }
}
