#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
    ll  n, t = 1;
    cin>>n;
    ll a[n];
    for(ll i = 0; i<n; i++)
        cin>>a[i];
    ll ans = 0;
    for(ll i = 0; i < n - 1; i++){

        if(a[i] != 1 && a[i +1] != 1){
            cout << "Infinite" << endl;
            return 0;
        }
        if(a[i] + a[i + 1] == 3) 
        ans += 3;
        else 
        ans += 4;
    }

    for(ll i = 0; i < n - 2; i++){
        if(a[i] == 3 && a[i + 1] == 1 && a[i + 2] == 2){
            ans--;
        }
    }
    cout << "Finite" << endl;
    cout<<ans;

    return 0;
}
