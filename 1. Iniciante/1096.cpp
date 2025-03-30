#include <iostream>
using namespace std;

int main(){
    int I=1;
    for(int i=0; i<5; i++){
        cout<<"I="<<I<<" J="<<7<<endl;
        cout<<"I="<<I<<" J="<<6<<endl;
        cout<<"I="<<I<<" J="<<5<<endl;
        I+=2;
    }
}