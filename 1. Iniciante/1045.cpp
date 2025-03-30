#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    double A,B,C;
    cin>>A>>B>>C;
    
    double lado[3] ={A,B,C};
    sort(lado, lado+3, greater<double>());

    A= lado[0];
    B= lado[1];
    C= lado[2];
    
    if(A>= B+C) cout<<"NAO FORMA TRIANGULO"<<endl;
    else{
        if(pow(A,2)== pow(B,2)+pow(C,2)) cout<<"TRIANGULO RETANGULO"<<endl;
        if(pow(A,2)> pow(B,2)+pow(C,2)) cout<<"TRIANGULO OBTUSANGULO"<<endl;
        if(pow(A,2)< pow(B,2)+pow(C,2)) cout<<"TRIANGULO ACUTANGULO"<<endl;
        if(A==B && B==C)cout<<"TRIANGULO EQUILATERO"<<endl;
        if((A==B && B!=C) || (A==C && A!=B) || (B==C && C!=A)) cout<<"TRIANGULO ISOSCELES"<<endl;
        }

}