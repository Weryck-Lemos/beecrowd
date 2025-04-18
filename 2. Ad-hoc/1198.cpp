#include <iostream>
using namespace std;

int main(){
    long long int ex1, ex2;
    while(cin>>ex1>>ex2){
        
        if(ex2<ex1){
            long long int guarda=ex2;
            ex2=ex1;
            ex1=guarda;
        }
        cout<<ex2-ex1<<endl;
    }
}