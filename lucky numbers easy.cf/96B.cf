#include <bits/stdc++.h>
using namespace std;
vector<long long> a;

void lucky(long long n, int f, int s) 
{
  if(n > 1e10) 
  return;
  if(f == s)
    a.push_back(n);
  
  lucky(n * 10 + 7, f, s + 1);
  lucky(n * 10 + 4, f+ 1, s);
}

int main() {
  lucky(4, 1, 0);
  lucky(7, 0, 1);
  long long n;
  cin >> n;
  
  sort(a.begin(), a.end());
  cout << a[lower_bound(a.begin(), a.end(), n) -a.begin()] << endl;
  
  return 0;
}
