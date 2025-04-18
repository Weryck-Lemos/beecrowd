#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<vector<int>> cameras(n+1,vector<int>(n+1));

    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            cin>>cameras[i][j];
        }
    }

    vector<vector<char>> status(n, vector<char>(n));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int count = cameras[i][j] + cameras[i][j + 1] + cameras[i + 1][j] + cameras[i + 1][j + 1];
            if(count >=2){
                status[i][j]='S';
            }

            else{
                status[i][j]='U';
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<status[i][j];
        }
        cout<<endl;
    }
}