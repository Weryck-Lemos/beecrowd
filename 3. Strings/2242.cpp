#include <bits/stdc++.h>
using namespace std;

int main(){
    string word;
    cin>>word;

    string risada;
    for(char c : word){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            risada.push_back(c);
        }
    }

    string risada_reversa = risada;
    reverse(risada_reversa.begin(), risada_reversa.end());

    if(risada == risada_reversa){
        cout<<"S"<<endl;
    }

    else{
        cout<<'N'<<endl;
    }
}