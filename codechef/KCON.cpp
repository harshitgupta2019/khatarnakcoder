#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll m(ll a ,ll b)
{
	if(a>=b)
	return a;
	return b;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
	cin >> t;
	while(t--){
		ll n,k;
		cin >> n >> k;
		vector<ll> a(n);
		ll sum=0;
		for(ll i=0; i<n; i++)
		{
			cin >> a[i];
			sum+=a[i];
		}
		ll ans=INT_MIN, curr=0;
		for(ll i=0; i<n; i++)
		{
			curr+=a[i];
			if(ans < curr){
				ans = curr;
			}
			if(curr<0){
				curr=0;
			}
		}
		if(k==1){
			cout << ans << endl;
		}
	
		else
		{
			for(ll i=0; i<n; i++){
				curr+=a[i];
				if(ans < curr){
					ans = curr;
				}
				if(curr<0){
					curr=0;
				}
			}
			cout << ans+m(0,sum)*(k-2) << endl;
		
		}
	}
	return 0;
}
