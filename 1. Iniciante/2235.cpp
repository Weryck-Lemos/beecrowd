#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a==b || a==c || b==c){
        cout<<'S'<<endl;
        return 0;
    }

    else{
        if(a == b+c || b == a+c || c == b+a){
            cout<<'S'<<endl;
            return 0;
        }
    }

    cout<<'N'<<endl;
}