#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
#define LL long long
const int maxn = 2 * 1e5 +100;
LL n,k,a[maxn],sum[maxn],mx[maxn],pos[maxn],i;
int main()
{
    scanf("%lld%lld",&n,&k);
    for(i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        sum[i] = sum[i-1] + a[i];
        if(i>=k) sum[i] -= a[i-k];
    }
    for(i=n;i>=k;i--){
        if(sum[i]>=mx[i+1]){
            mx[i] = sum[i];
            pos[i] = i;
        }
        else{
            mx[i] = mx[i+1];
            pos[i] = pos[i+1];
        }
    }
    LL ans = 0,pos1 = 0,pos2 = 0;
    for(i=k;i<=n;i++){
        LL sm = sum[i] + mx[i+k];
        if(ans<sm){
            ans = sm;
            pos1 = i-k+1;
            pos2 = pos[i+k]-k+1;
        }
    }
    printf("%lld %lld\n",pos1,pos2);
    return 0;
}
