#include <iostream>
using namespace std;

int main(){
    int T, count=0;
    cin>>T;
    while(count<T){
        int PA, PB;
        cin>>PA>>PB;
        double G1, G2;
        cin>>G1>>G2;

        int ano=0;
        while(PB>=PA){
            PA+=(PA*(G1/100));
            PB+=(PB*(G2/100));
            ano++;

            if(ano>100){
                cout<<"Mais de 1 seculo."<<endl;
                break;  
        }
        }
        
        
        if(ano<=100){
            cout<<ano<<" anos."<<endl;
        }
        

        count++;
    }
}