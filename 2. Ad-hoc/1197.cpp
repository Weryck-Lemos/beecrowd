#include <iostream>
using namespace std;

int main(){
    int velocidade, tempo;
    while(cin>>velocidade>>tempo){
        int deslocamento = velocidade* tempo;
        cout<<deslocamento*2<<endl;
    }


}