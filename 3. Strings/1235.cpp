#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();

    for(int i=0; i<n; i++){
        string word;
        getline(cin, word);

        int metade = word.size()/2;

        reverse(word.begin(), word.begin() +metade);
        reverse(word.begin()+metade, word.end());

        cout<<word<<endl;
    }
}