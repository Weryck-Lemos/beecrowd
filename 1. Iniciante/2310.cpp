#include <bits/stdc++.h>
using namespace std;

int main(){
    string nome;
    int n, s=0, b=0, a=0, s1=0, b1=0, a1=0;
    cin>>n;

    double numerador_s=0, denominador_s=0, 
    numerador_b=0, denominador_b=0, 
    numerador_a=0, denominador_a=0;

    while(n>0){
        cin>>nome;
        cin>>s>>b>>a;

        denominador_s +=s;
        denominador_b +=b;
        denominador_a +=a;


        cin>>s1>>b1>>a1;

        numerador_s +=s1;
        numerador_b +=b1;
        numerador_a +=a1;

        n--;
    }

    cout<<fixed<<setprecision(2);
    cout<<"Pontos de Saque: "<<numerador_s/denominador_s*100<<" %."<<endl;
    cout<<"Pontos de Bloqueio: "<<numerador_b/denominador_b*100<<" %."<<endl;
    cout<<"Pontos de Ataque: "<<numerador_a/denominador_a*100<<" %."<<endl;
}