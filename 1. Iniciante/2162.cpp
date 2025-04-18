#include <bits/stdc++.h>
using namespace std;

int main(){
    bool pico = false, vale = false;

    int n, anterior;
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;

        if(i != 0){
            if(x<anterior){
                if(vale){
                    cout<<0<<endl;
                    return 0;
                }
                vale = true;
                pico = false;
                
            }

            else if(x>anterior){
                if(pico){
                    cout<<0<<endl;
                    return 0;
                }
                pico = true;
                vale = false;
                
            }

            else{
                cout<<0<<endl;
                return 0;
            }
        }

        anterior = x;
    }

    cout<<1<<endl;
}