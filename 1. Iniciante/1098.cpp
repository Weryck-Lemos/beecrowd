#include <iostream>
using namespace std;

int main(){
    float m=0,n=1;
    for(int i=0; i<11; i++){
        for(int j=0; j<3; j++){
            cout<<"I="<<m<<" J="<<n<<endl;
            n+=1;
        }
        m+=0.2;
        n= 1+m;
    }
}