#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n=1, first=1;
    while(cin>>n && n){
        size_t maior= 0;
        vector<string> vet(n);

        if(first) first=0;
        else cout<<"\n";

        for(int i=0; i<n; i++){
            cin>>vet[i];
            maior = max(maior, vet[i].size());
        }

        for(int i=0; i<n; i++){
            cout<<setw(maior)<<vet[i]<<"\n";
        }
        
    }
}