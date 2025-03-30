#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        string j1, j2;
        cin>>j1>>j2;

        if(j1==j2)cout<<"empate\n";

        else if(j1=="tesoura" && j2=="papel" || j1=="papel" && j2=="pedra" ||
        j1=="pedra" && j2=="lagarto" || j1=="lagarto" && j2=="spock"  ||
        j1=="spock" && j2=="tesoura" || j1=="tesoura" && j2=="lagarto"||
        j1=="lagarto" && j2=="papel"|| j1=="papel" && j2=="spock" ||
        j1=="pedra" && j2=="tesoura"){
            cout<<"rajesh\n";
        }

        else cout<<"sheldon\n";
    }
}