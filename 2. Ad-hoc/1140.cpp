#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    string str;
    while(1){
        getline(cin, str);

        if(str=="*")break;

        stringstream ss(str);
        string x;


        char ant='*';
        bool istrue= true;
        while(ss>>x){
            if(ant=='*')ant = char(tolower(x[0]));
            if(char(tolower(x[0]))!= ant) istrue=false;
        }

        if(istrue)cout<<"Y\n";
        else cout<<"N\n";
    }

}