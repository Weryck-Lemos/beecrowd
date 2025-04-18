#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n>0){
        int m, contagem = 0;
        cin>>m;

        vector<int> fila(m);
        for(int i=0; i<m; i++){
            cin>>fila[i];
        }

        vector<int> fila_ordenada = fila;
        sort(fila_ordenada.rbegin(), fila_ordenada.rend());

        for(int i=0; i<m; i++){
            if(fila[i] == fila_ordenada[i]){
                contagem++;
            }
        }

        cout<<contagem<<endl;

        n--;
    }
}