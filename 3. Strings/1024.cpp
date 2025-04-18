#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();

    for(int rep=0; rep<n; rep++){
        string text;
        getline(cin, text);
        int tam = text.size();

        for(int i=0; i<tam; i++){
            if(isalpha(text[i])){
                text[i]+= 3;
            }
        }

        reverse(text.begin(), text.end());


        for(int i= tam/2 ; i<tam; i++){
            text[i]-=1;
        }

        cout<<text<<endl;

    }
}