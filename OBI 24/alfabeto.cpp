#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    string alien;
    string frase;
    map<char, int> verif;

    cin>>alien>>frase;

    for(char c : alien)
    {
        verif[c]++;
    }

    for(char c : frase)
    {
        if(verif[c] == 0)
        {
            cout<<'N'<<endl;
            return 0;
        }
    }

    cout<<'S'<<endl;


}