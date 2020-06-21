#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while(t --) 
    {
        int n;
        cin >> n;
        long long a[n + 1];
        long long dp[n + 1][2];
        long long sum = INT_MIN;
        dp[0][0] = dp[0][1] = 0ll;
        for(long long i = 1; i <= n; i ++) 
        {
            cin >> a[i];
            dp[i][0] = a[i];
            dp[i][1] = 0;
            if(dp[i - 1][0] + a[i] >= 0 && dp[i - 1][0] >= 0) 
            {
                dp[i][0] += dp[i - 1][0];
                dp[i][1] = min(a[i], dp[i - 1][1]);
            }
            sum = max(sum, dp[i][0]);
        }
        long long ans = sum;
        for(long long i = 1; i <= n; i ++)
        {
            if(sum == dp[i][0]) {
                ans = max(ans, dp[i][0] - dp[i][1]);
            }
        }
        cout << ans << endl;
    }
	return 0;
}
