#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int rep;
    cin>>rep;
    cin.ignore();

    while(rep--){
        int maior=-1;
        vector<int> freq(26,0);

        string frase;
        getline(cin,frase);


        for(size_t i=0; i<frase.size(); i++){
            if(isalpha(frase[i])){

                char letra = tolower(frase[i]);
                freq[letra-'a']++;
                maior = max(freq[letra-'a'], maior);
            }
        }


        for(int i=0; i<26; i++){
            if(freq[i]==maior)cout<<char(i+'a');
            //cout<<freq[i]<<" ";
        }
        cout<<"\n";
    }
}