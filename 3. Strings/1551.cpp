#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;
    
    while(n--){
        map<char,int> vet;

        string str;
        cin.ignore();

        getline(cin,str);
        for(size_t i=0; i<str.size(); i++){
            if(isalpha(str[i]))vet[str[i]]++;
        }

        int ans=0;
        for(char i='a'; i<='z'; i++){
            if(vet[i])ans++;
        }

        if(ans==26)cout<<"frase completa\n";
        else if(ans>=13) cout<<"frase quase completa\n";
        else cout<<"frase mal elaborada\n";
    }
}