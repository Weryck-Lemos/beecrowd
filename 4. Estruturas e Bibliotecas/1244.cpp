#include <bits/stdc++.h>
using namespace std;

bool compara(string a, string b)
{
    return a.size() > b.size();
}

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    
    while(n--)
    {
        string entrada;
        getline(cin, entrada);

        stringstream iss(entrada);
        vector<string> words;
        string word;

        while(iss >> word)
        {
            words.push_back(word);
        }

        stable_sort(words.begin(), words.end(), compara);

        for(size_t i=0; i<words.size(); i++)
        {
            cout<<words[i];

            if(i<words.size()-1) cout<<" ";
        }
        
        cout<<endl;
    }
}