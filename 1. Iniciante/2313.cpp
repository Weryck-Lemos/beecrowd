#include <bits/stdc++.h>
using namespace std;

void quadrado(int a, int b, int c){
    int hip = max(a,max(b,c));
    int l1, l2;

    if(hip ==a){
        l1 = b;
        l2 = c;
    }

    else if(hip == b){
        l1 = a;
        l2 = c;
    }

    else if(hip==c){
        l1 = a;
        l2 = b;
    }

    if(pow(hip,2)== pow(l1,2) + pow(l2,2)){
        cout<<"Retangulo: S"<<endl;
    }

    else{
        cout<<"Retangulo: N"<<endl;
    }
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a+b>c && b+c>a && a+c>b){
        if(a==b && b==c && a==c){
            cout<<"Valido-Equilatero"<<endl;
            quadrado(a,b,c);
        }

        else if(a !=b && b !=c && c!= a){
            cout<<"Valido-Escaleno"<<endl;
            quadrado(a,b,c);
        }

        else{
            cout<<"Valido-Isoceles"<<endl;
            quadrado(a,b,c);
        }
    }

    else{
        cout<<"Invalido"<<endl;
    }
}