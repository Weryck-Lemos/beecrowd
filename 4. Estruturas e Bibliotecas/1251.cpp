#include <bits/stdc++.h>
using namespace std;
const int MAXN = 256;

struct letra
{
    int ascii;
    int rep;
};

bool compara(letra a, letra b)
{
    if(a.rep == b.rep) return a.ascii> b.ascii;

    return a.rep < b.rep;
}

int main()
{
    string txt;
    bool fc = true;
    while(getline(cin, txt))
    {
        if(!fc) cout<<endl;

        fc= false;

        vector<letra> word(MAXN, {0,0});
        for(char c : txt)
        {
            word[c].ascii = c;
        }

        for(char c : txt) word[int(c)].rep++;

        sort(word.begin(), word.end(), compara);

        for(auto u : word)
        {
            if(u.rep>0) cout<<u.ascii<<" "<<u.rep<<endl;
        }



    }
}