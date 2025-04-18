#include <iostream>
using namespace std;

int main(){
int J=7;
    for(int i =1; i<10; i+=2){
        for(int n=0; n<3; n++){
            cout<<"I="<<i<<" J="<<J<<endl;
            J-=1;
        }
        J=8+i;
    }
}