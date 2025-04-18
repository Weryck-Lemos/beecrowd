#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, muralha, tamanho=0, answer=1, total=0;
    cin>>t>>muralha;

    string titas;
    cin>>titas;

    int p, m, g;
    cin>>p>>m>>g;


    for(char c : titas){
        if(c=='P'){
            tamanho = p;
        }

        else if(c=='M'){
            tamanho = m;
        }

        else{
            tamanho = g;
        }

        total += tamanho;

    }

    double div= double(total)/muralha;

    if(total%muralha == 0){
        cout<<answer+ ceil(div)-1<<endl;
        return 0;
    }

    else{
        cout<< answer + ceil(div)<<endl;
    }
    

}