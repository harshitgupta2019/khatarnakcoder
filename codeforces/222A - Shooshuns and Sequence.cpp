#include <iostream>
using namespace std;

int main() {
	int n, k, a, l=0, c=1;
    cin>>n>>k;
    for (int i = 0; i < n; ++i)
    {
        cin>>a;
        if (a == l)
        {
            c += 1;
        }
        else
        {
            c = 1;
        }
        l = a;
    }
    if( c + k > n )
    cout<<n-c<<endl;
    else
    cout<<-1<<endl;
    return 0;
	return 0;
}
