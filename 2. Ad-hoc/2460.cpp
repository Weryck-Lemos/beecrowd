#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> vet(n);
    for(int i=0; i<n; i++){
        cin>>vet[i];
    }

    int m;
    cin>>m;

    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        auto it = find(vet.begin(), vet.end(), x);
        vet.erase(it);
    }

    for(int i=0; i<vet.size(); i++){
        cout<<vet[i];
        if(i<vet.size()-1)cout<<" ";
    }
    cout<<"\n";
}