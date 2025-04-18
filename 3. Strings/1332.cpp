#include <bits/stdc++.h>
using namespace std;

bool um(string num){
    if(num.size()!=3) return false;
    int dif = 0;
    if(num[0] != 'o') dif++;
    if(num[1] != 'n') dif++;
    if(num[2] != 'e') dif++;

    return dif <= 1;
}

bool dois(string num){
    if(num.size()!=3) return false;
    int dif = 0;
    if(num[0] != 't') dif++;
    if(num[1] != 'w') dif++;
    if(num[2] != 'o') dif++;

    return dif <= 1;
}

int main(){
    int n;
    cin>>n;
    string numero;
    
    for(int i=0; i<n; i++){
        cin>>numero;

        if(um(numero)){
            cout<<1<<endl;
            continue;
        }

        if(dois(numero)){
            cout<<2<<endl;
            continue;
        }

        cout<<3<<endl;
    }
}