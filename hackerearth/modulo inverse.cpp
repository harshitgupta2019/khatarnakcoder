#include<iostream> 
using namespace std;
long long int gcdExtended(long long int a, long long int b, long long int *x, long long int *y) 
{ 
    if (a == 0) 
    { 
        *x = 0, *y = 1; 
        return b; 
    } 
    long long int x1, y1; 
    long long int gcd = gcdExtended(b%a, a, &x1, &y1); 
    *x = y1 - (b/a) * x1; 
    *y = x1; 
  
    return gcd; 
} 
void modInverse(int a, int m) 
{ 
    long long int x, y; 
    long long int g = gcdExtended(a, m, &x, &y); 
    if (g != 1) 
        cout << "Inverse doesn't exist"; 
    else
    { 
        
        long long int res = (x%m + m) % m; 
        cout<< res; 
    } 
} 
int main() 
{ 
    long long int a , m = 1000000007; 
    cin>>a;
    modInverse(a, m); 
    return 0; 
} 
