#include<bits/stdc++.h>
using namespace std;
int main(){

   int n,m,d;
   cin>>n>>m>>d;
    int a[n*m];

    bool p=true;
    int c=-1;
    for(int k = 0; k < n * m; k++){
        cin>>a[k];
        if(c < 0){c = a[k] % d;}
        if(a[k] % d != c)
        {
        	p = 0; 
        break;
        	
        }
    }

    if(p)
    {
    	sort(a, a + n * m);
        int median = a[n * m / 2];
        long total=0;
        for(int k = 0; k < m * n; k++)
        {total += abs(a[k] - median) / d;}
        printf("%ld\n", total);
    }
    else
    cout<<-1<<endl;

    return 0;
}
