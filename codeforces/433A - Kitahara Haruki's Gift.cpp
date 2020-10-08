#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int x,i,h=0,sum=0;
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(x==100)
		h++;
	}
	sum=h*100+(n-h)*200;
	if(sum%200!=0)
	cout<<"NO"<<endl;
	else {
        int half = sum / 2;
        bool ans = false;
        for (int i = 0; i <= (n-h); ++i)
            if (200 * i <= half && half - 200 * i <= h * 100) ans = true;
        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}
