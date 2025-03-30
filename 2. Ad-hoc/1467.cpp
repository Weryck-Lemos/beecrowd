#include <iostream>
using namespace std;

int main(){
    int A,B,C;
    while(cin>>A>>B>>C){
        if(A==1 && B==0 && C==0 || A==0 && B==1 && C==1){
            cout<<"A"<<endl;
        }
        else if(A==B && B==C){
            cout<<"*"<<endl;
        }
        else if(B==1 && A==0 && C==0 || B==0 &&A==1 &&C==1){
            cout<<"B"<<endl;
        }
        else{
            cout<<"C"<<endl;
        }
    }
}