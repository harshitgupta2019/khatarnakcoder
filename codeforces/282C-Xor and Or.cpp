#include <iostream>
#include <string>
using namespace std;
int main(){
        string a,b;
        cin>>a>>b;
        bool ans_a = false;
        bool ans_b = false;
        if(a.size()==b.size()){
                for(int i=0;i<a.size();i++){
                        if(a[i]=='1'){
                                ans_a=true;
                        }
                        if(b[i]=='1'){
                                ans_b=true;
                        }
                }
        }
        if(a.size()==1){
                ans_a=false;
        }
        if(a==b){
                ans_a=true;
                ans_b=true;
        }
        if(ans_a and ans_b)
                cout<<"YES"<<endl;
        else
                cout<<"NO"<<endl;
        return 0;
}
