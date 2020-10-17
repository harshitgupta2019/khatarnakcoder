#include <bits/stdc++.h>
 
const int MAXN = 100000 + 5;
long long a[MAXN];
 
int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
    scanf("%d", a + i);
  int m;
  scanf("%d", &m);
  long long hit = 0;
  for (; m--; ) {
    int w, h;
    scanf("%d %d", &w, &h);
    long long res = std::max(a[w], hit);
    printf("%I64d\n", res);
    hit = res + h;
  }
  return 0;
}
 
