#include <iostream>
#include <cmath>

using namespace std;

int main(){
    while(true){
        double A,B,C;
        cin>>A;
        if(A==0){
            break;
        }
        cin>>B>>C;
        
        
        double area = (A*B)/(C/100);
        cout<<int(sqrt(area))<<endl;
        



    }
}