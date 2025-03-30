#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0) return 0;

        string volver;
        cin>>volver;

        char pos= 'N';

        for(char c : volver)
        {
            if(c=='E')
            {
                if(pos=='N') pos='O';
                else if(pos=='O') pos='S';
                else if(pos=='S') pos='L';
                else pos='N';
            }

            else
            {
                if(pos=='N') pos='L';
                else if(pos=='O') pos='N';
                else if(pos=='S') pos='O';
                else pos='S';
            }
        }

        cout<<pos<<'\n';
    }
}