#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string texto;
    getline(cin,texto);

    if(texto.size()<=80){
        cout<<"YES"<<endl;
    }

    else{
        cout<<"NO"<<endl;
    }
}