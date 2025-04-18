#include <iostream>
#include <string>
using namespace std;

int main(){
    string marius, doutor;
    cin>>marius>>doutor;

    if(marius.length()>=doutor.length()){
        cout<<"go"<<endl;
    }
    else cout<<"no"<<endl;
}