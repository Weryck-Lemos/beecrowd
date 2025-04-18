#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    set<string> pokemon;

    for(int i=0; i<n; i++){
        string x;
        cin>>x;

        pokemon.insert(x);
    }

    cout<<"Falta(m) "<<151-pokemon.size()<<" pomekon(s)."<<endl;
}