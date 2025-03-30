#include <bits/stdc++.h>
using namespace std;

int main(){
    string frase;
    getline(cin, frase);

    string frase1, frase2;

    size_t pos = frase.find(',');

    if(pos != frase.size()){
        frase1 = frase.substr(0,pos);
        frase2 = frase.substr(pos+1, frase.size());
    }

    cout<<frase1<<endl<<frase2<<endl;
}