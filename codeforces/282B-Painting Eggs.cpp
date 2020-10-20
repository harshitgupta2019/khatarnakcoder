#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,a,b;
    cin >> n;
    int tot = 0;
    for(i=0;i<n;i++)
    {
        cin >> a >> b;
        if (tot+a <= 500) 
        {
            tot += a;
            cout << "A";
        } 
        else 
        {
            tot -= b;
            cout << "G";
        }
    }
    cout << endl;
    return 0;
}
