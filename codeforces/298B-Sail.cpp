#include <iostream>
using namespace std;
int main() 
{
	int t,a,b,x,y,ans=-1;
	string s;
	cin>>t>>a>>b>>x>>y;
	cin>>s;
    for (int i = 0; i < t; ++i)
    {
        switch (s[i])
        {
        case 'E':
            if (a< x)
            {
                a += 1;
            }
            break;
        case 'S':
            if (b > y)
            {
                b -= 1;
            }
            break;
        case 'W':
            if (a > x)
            {
                a -= 1;
            }
            break;
        case 'N':
            if (b < y)
            {
                b += 1;
            }
            break;
        default:
            break;
        }
        if (a == x && b == y)
        {
            ans = i + 1;
            break;
        }
    }
    cout<<ans<<endl;
	return 0;
}
