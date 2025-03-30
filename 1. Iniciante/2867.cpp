#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m, rep;
    cin>>rep;

    for(int i=0; i<rep; i++){
        cin>>n>>m;

        double digitos = m* log10(n);
        int digitos_num = floor(digitos)+1;

        cout<<digitos_num<<endl;
    }
}