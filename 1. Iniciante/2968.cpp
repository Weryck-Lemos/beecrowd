#include <bits/stdc++.h>
using namespace std;

int main() {
    int v, d;
    cin >> v >> d;

    int total = v * d;
    int answer[9];

    for(int i=1; i<=9; i++){
        answer[i-1] = ceil(total * (i/10.0));
    }

    for(int i=0; i<9; i++){
        cout<<answer[i];
        if(i<8){
            cout<<" ";
        }
        else{
            cout<<endl;
        }
    }
}
