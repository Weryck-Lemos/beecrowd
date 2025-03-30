#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<char, double> notas = {{'W',1.0} , {'H',1.0/2} , {'Q', 1.0/4},
    {'E', 1.0/8}, {'S',1.0/16}, {'T',1.0/32}, {'X',1.0/64}};

    string jingle;
    while(cin>>jingle && jingle!="*"){
        double tot=0;
        int answer=0;

        for(char c : jingle)
        {   

            if(c=='/')
            {
                if(tot == 1)
                {
                    answer++;
                }

                tot=0;
            }

            else tot+= notas[c];
        }

        cout<<answer<<endl;
    }
}