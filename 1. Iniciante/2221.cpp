#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int bonus, ag, dg, lg, ad, dd, ld;

    while(n>0){
        cin>>bonus;

        cin>>ag>>dg>>lg;
        cin>>ad>>dd>>ld;


        int golpe_a = (ag+dg)/2.0;
        if(lg %2==0){
            golpe_a+=bonus;
        }

        int golpe_d = (ad+dd)/2.0;
        if(ld %2==0){
            golpe_d+=bonus;
        }


        if(golpe_a > golpe_d){
            cout<<"Dabriel"<<endl;
        }

        else if(golpe_d > golpe_a){
            cout<<"Guarte"<<endl;
        }

        else{
            cout<<"Empate"<<endl;
        }

        n--;
    }
}