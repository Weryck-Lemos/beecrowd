#include <bits/stdc++.h>
using namespace std;

int inverter(int n){
    int rev=0;
    while(n){
        rev = rev*10 + n%10;
        n/=10;
    }

    return rev;
}

int bfs(int A, int B){
    queue<pair<int,int>> fila;
    unordered_set<int> vis;

    fila.push({A,0});
    vis.insert(A);

    while(!fila.empty()){
        auto [num, passos] = fila.front();
        fila.pop();

        if(num==B) return passos;

        if(!vis.count(num+1)){
            fila.push({num+1,passos+1});
            vis.insert(num+1);
        }

        int rev = inverter(num);
        if(!vis.count(rev)){
            fila.push({rev,passos+1});
            vis.insert(rev);
        }

    }
    return -1;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int rep;
    cin>>rep;

    while(rep--){
        int n,m;
        cin>>n>>m;

        cout<<bfs(n,m)<<"\n";
    }

}