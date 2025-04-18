#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();

    for(int i=0; i<n; i++){
        string t1;
        string t2;
        cin>>t1;
        cin>>t2;

        string texto;

        int tam1 = t1.size(), tam2 = t2.size();
        int x= 0, tamanho = max(tam1, tam2);

        while(x<tamanho){

            if(x<tam1){
                texto.push_back(t1[x]);
            }
            if(x<tam2){
                texto.push_back(t2[x]);
            }
            x++;
        }

        cout<<texto<<endl;
    }
}