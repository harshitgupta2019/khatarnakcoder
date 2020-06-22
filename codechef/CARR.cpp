#include <iostream>
using namespace std;
#define MOD 1000000007 
void multiply( long long int a[2][2], long long int b[2][2])
{
     long long int c[2][2];
    c[0][0] = ((a[0][0]*b[0][0])%MOD + (a[0][1]*b[1][0])%MOD)%MOD;
    c[0][1] = ((a[0][0]*b[0][1])%MOD + (a[0][1]*b[1][1])%MOD)%MOD;
    c[1][0] = ((a[1][0]*b[0][0])%MOD + (a[1][1]*b[1][0])%MOD)%MOD;
    c[1][1] = ((a[1][0]*b[0][1])%MOD + (a[1][1]*b[1][1])%MOD)%MOD; 
    b[0][0] = c[0][0];  b[1][0] = c[1][0];  b[0][1] = c[0][1];     b[1][1] = c[1][1];
    return ;   
}
void power( long long int T[2][2], long long int n){
    if(n == 0){
        T[0][0] = 1;
        T[0][1] = 0;
        T[1][0] = 0;
        T[1][1] = 1;
        return ;
    }
    if(n%2 == 0){
        power(T,n/2);
        multiply(T,T);
        return ;
    }
    else{
        long long int temp_T[2][2];
        temp_T[0][0] = T[0][0]%MOD; 
        temp_T[0][1] = T[0][1]%MOD; 
        temp_T[1][0] = T[1][0]%MOD; 
        temp_T[1][1] = T[1][1]%MOD;  
        power(T,n-1);
        multiply(temp_T,T);
        return ;
    }
}
int main() 
{
     long long int t; cin>>t;
    while(t--){
     long long int n,m;  cin>>n>>m;
        if(n==1){
            cout<<m%MOD<<endl;
            continue;
        } 
         m %= MOD;
         long long int T[2][2];
        T[0][0] = 0; T[0][1] = 1;
        T[1][0] = (m-1)%MOD; T[1][1] = (m-1)%MOD;
        power(T,n-1);
        long long int ans = (((T[0][1] + T[1][1])%MOD)*m)%MOD;
        cout<<ans<<endl;
    }
    return 0;
}
