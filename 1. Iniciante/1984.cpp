#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string numero;
    cin>>numero;

    reverse(numero.begin(), numero.end());

    cout<<numero<<endl;
}