#include<bits/stdc++.h>
using namespace std;

const double PI = acos(-1);

int main() {
    double n,r;
    cin >> n >> r;
    double x = sin( PI / n);
    double R = r * x / (1 - x);
    cout << fixed << setprecision(12) << R << '\n';
}
