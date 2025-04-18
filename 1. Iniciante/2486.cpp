#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string, int> vitaminaC = {
        {"suco de laranja", 120},
        {"morango fresco", 85},
        {"mamao", 85},
        {"goiaba vermelha", 70},
        {"manga", 56},
        {"laranja", 50},
        {"brocolis", 34}
    };

    int n;

    while(cin>>n && n!=0){
        int tot = 0;

        for(int i=0; i<n; i++){
            int qnt;
            cin>>qnt;
            cin.ignore();
            string fruta;
            getline(cin, fruta);

            tot += qnt * vitaminaC[fruta];
        }

        if(tot >130){
            cout<<"Menos "<<tot-130<<" mg"<<endl;
        }

        else if(tot<110){
            cout<<"Mais "<<110-tot<<" mg"<<endl;
        }

        else{
            cout<<tot<<" mg"<<endl;
        }
    }
}