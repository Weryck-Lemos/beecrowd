#include <iostream>
using namespace std;

int main(){
    while(true){
        int L, C , R1, R2;
        cin>>L>>C>>R1>>R2;

        if(L==0 && C==0 && R1==0 && R2==0){
            break;
        }

        
        int cilindro1= R1+R1;
        int cilindro2= R2+R2;

        if(L>=cilindro1 +cilindro2 || C>=cilindro1 +cilindro2){
            cout<<"S"<<endl;
        }

        else{
            cout<<"N"<<endl;
        }

        
    }
}