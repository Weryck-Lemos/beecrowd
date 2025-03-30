#include <bits/stdc++.h>
using namespace std;

int main(){

    double n;
    while(cin>>n){
        double favor=0, contra=0;

        for(int i=0; i<n; i++){
            int x;
            cin>>x;

            if(x==1){
                favor++;
            }

            else{
                contra++;
            }
        }

        double cota = (n/3)*2;

        if(favor>=cota){
            cout<<"impeachment"<<endl;
        }

        else{
            cout<<"acusacao arquivada"<<endl;
        }
    }
}