#include<bits/stdc++.h>
using namespace std;

int main(){
    string data;
    cin>>data;

    string dia = data.substr(0,2);
    string mes = data.substr(3,2);
    string ano = data.substr(6,2);

    cout<<mes<<"/"<<dia<<"/"<<ano<<endl;
    cout<<ano<<"/"<<mes<<"/"<<dia<<endl;
    cout<<dia<<"-"<<mes<<"-"<<ano<<endl;
}