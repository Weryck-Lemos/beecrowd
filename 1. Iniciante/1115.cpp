#include <iostream>
using namespace std;

int main(){
    while(true){
        int X,Y;
        cin>>X>>Y;

        if(X>0 && Y>0){
            cout<<"primeiro"<<endl;
        }
        else if(X<0 && Y>0){
            cout<<"segundo"<<endl;
        }
        else if(X<0 && Y<0){
            cout<<"terceiro"<<endl;
        }
        else if(X>0 && Y<0){
            cout<<"quarto"<<endl;
        }
        else if(X==0 || Y==0){
            break;
        }
    }
}