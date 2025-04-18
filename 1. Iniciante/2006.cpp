#include <iostream>
using namespace std;

int main(){
    int T;
    cin>>T;

    int resp[5], correto=0;

    for(int i=0; i<5; i++){
        cin>>resp[i];
        if(resp[i]==T){
            correto++;
        }
    }

    cout<<correto<<endl;
}