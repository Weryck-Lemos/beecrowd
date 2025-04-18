#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string, string> frase;

    frase["esquerda"] = "ingles";
    frase["direita"] = "frances";
    frase["nenhuma"] = "portugues";
    frase["as duas"] = "caiu";

    string resposta;
    while(getline(cin, resposta)){
        cout<<frase[resposta]<<endl;
    }
}