#include <bits/stdc++.h>
using namespace std;

bool encaixa(string a, string b){

    if(b.size()> a.size()){
        return false;
    }
    
    size_t inicio = a.size()- b.size();

    int x=0;

    for(size_t i = inicio; i<a.size(); i++){
        if(a[i] != b[x]){
            return false;
        }

        x++;
    }

    return true;
}

int main(){
    int n;
    cin>>n;

    while(n>0){

        string a, b;
        cin>>a>>b;

        if(encaixa(a,b)){
            cout<<"encaixa"<<endl;
        }

        else{
            cout<<"nao encaixa"<<endl;
        }

        n--;
    }
}