#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        string texto, texto_descodificado;
        int deslocamento;

        cin>>texto>>deslocamento;

        for(char c : texto){
            char letra = c - deslocamento;

            if(letra < 'A'){
                letra+=26;
            }

            texto_descodificado.push_back(letra);
        }

        cout<<texto_descodificado<<endl;
    }
}