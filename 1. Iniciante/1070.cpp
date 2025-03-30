#include <iostream>
using namespace std;

int main(){
    int valor;
    cin>>valor;

    for(int i=valor; i<valor+12; i++){
        if(i%2 !=0){
            cout<<i<<endl;
        }
    }

}