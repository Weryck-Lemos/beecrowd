#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    vector<vector<int>> matriz(n, vector<int>(m));
    


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matriz[i][j];

        }
    }

    for(int i=1; i<n-1; i++){
        for(int j=1; j<m; j++){
            if(matriz[i][j] == 42){

                if(matriz[i][j] == 42 &&
                matriz[i - 1][j - 1] == 7 &&
                matriz[i - 1][j] == 7 &&
                matriz[i - 1][j + 1] == 7 &&
                matriz[i][j - 1] == 7 &&
                matriz[i][j + 1] == 7 &&
                matriz[i + 1][j - 1] == 7 &&
                matriz[i + 1][j] == 7 &&
                matriz[i + 1][j + 1] == 7){
                    i++, j++;
                    cout<<i<<" "<<j<<endl;
                    return 0;
                }
            }
        }
    }


    cout<<"0 0"<<endl;
    return 0;
}