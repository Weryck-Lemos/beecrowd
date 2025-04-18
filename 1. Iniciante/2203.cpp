#include <bits/stdc++.h>
using namespace std;

int main(){
    int xf, yf, xi, yi, vi, r1, r2;
    while(cin>>xf>>yf>>xi>>yi>>vi>>r1>>r2){

        double distancia_inicial = sqrt(pow(xf-xi,2) + pow(yf-yi,2));

        double distancia_fuga = 1.5*vi;

        double distancia_ultimate = r1+r2;

        if(distancia_inicial + distancia_fuga <= distancia_ultimate){
            cout<<'Y'<<endl;
        }

        else{
            cout<<'N'<<endl;
        }
    }
}