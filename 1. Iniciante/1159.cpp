#include <iostream>
using namespace std;

int main(){;
    while(true){
        int X;
        cin>>X;
        if(X==0){
            break;
        }

        
        int count=0, soma=0;
        while(count<5){
            if(X%2 ==0){
                soma+=X;
                count++;
            }
            X++;
        }
        cout<<soma<<endl;
    }
}