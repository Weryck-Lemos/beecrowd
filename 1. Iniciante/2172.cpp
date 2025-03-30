#include <iostream>
using namespace std;

int main(){
    long long int N, xp;

    while(cin>>N>>xp){

        if(N==0 && xp==0){
            break;
        }
        cout<<N*xp<<endl;
    }
}