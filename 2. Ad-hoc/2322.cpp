#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<bool>vet(n, false);
    for(int i=0; i<n-1; i++){
        int x;
        cin>>x;
        vet[x-1] = true;
    }

    for(int i; i<n; i++){
        if(!vet[i]){
            cout<<i+1<<"\n";
            return 0;
        }
    }
}