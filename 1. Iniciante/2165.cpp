#include <iostream>
#include <string>
using namespace std;

int main(){
    string N;
    getline(cin, N);

    if(N.size()<=140){
        cout<<"TWEET"<<endl;
    }

    else{
        cout<<"MUTE"<<endl;
    }
}