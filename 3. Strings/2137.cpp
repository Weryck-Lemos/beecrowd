#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        vector<string> vet(n);
        for(int i=0; i<n; i++){
            cin>>vet[i];
        }

        sort(vet.begin(), vet.end());
        for(int i=0; i<n; i++){
            cout<<vet[i];
            cout<<"\n";
        }  
    }
}