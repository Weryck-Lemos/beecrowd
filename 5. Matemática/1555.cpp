#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N;
    cin>>N;
    
    for(int i=0; i<N; i++){
        double X,Y, valorR, valorB, valorC;
        cin>>X>>Y;

        valorR = pow((3*X),2)+ pow(Y,2);
        valorB = 2*pow(X,2)+ pow((5*Y),2);
        valorC = -100*X + pow(Y,3);

        if(valorR > valorB && valorR> valorC){
            cout<<"Rafael ganhou"<<endl;
        }
        else if(valorB> valorR && valorB>valorC){
            cout<<"Beto ganhou"<<endl;
        }
        else if(valorC > valorB && valorC> valorR){
        cout<<"Carlos ganhou"<<endl;
        }


    }
}