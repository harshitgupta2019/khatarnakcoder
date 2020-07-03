#include <bits/stdc++.h>
using namespace std;
int power_2(int x)
{
    int ctr = 0;
    while(x>0){
        x/=2;
      ++ctr;
    }
    return ctr;
}
int lca(int x, int y)
{
    if(x==y)
        return x;
    else{
        set<int> X,Y;
        while(x>0){
            X.insert(x);
            x/=2;
        }
        while(y>0){
            Y.insert(y);
            y/=2;
        }
        int ans = 1;
        for (auto i = X.begin() ; i != X.end(); i++){
            if(Y.find(*i) != Y.end())
                ans = max(ans, *i);
        }
//        cout<<ans<<" ";
        return ans;
    }
}

int numnodes(int x, int y)
{
    return (power_2(x)+power_2(y) - 2*power_2(lca(x,y)) + 1);
}

int main() 
{
    
        int q;
        cin >> q;
        string s; 
        int ct = 0, x, y;
        int r, b;
        b=1, r=0;

        while (q--){
            cin >> s;
            if(s == "Qi"){
                swap(r,b);
            }
            else{
                cin >> x >> y;
                if(numnodes(x,y)%2==0)
                   cout << numnodes(x,y)/2 << " ";
                else{
                    int odd = numnodes(x,y)/2 +1;
                    int even = numnodes(x,y)/2;
                    if(s=="Qb")
                    {
                        if(b==power_2(x)%2)
                            cout << odd << " ";
                        else 
                            cout << even << " ";
                    }
                    else{
                        if(r==power_2(x)%2)
                            cout << odd << " ";
                        else 
                            cout << even << " ";
                    }
                }  
            }
        }     
    
    return 0;
}
 
