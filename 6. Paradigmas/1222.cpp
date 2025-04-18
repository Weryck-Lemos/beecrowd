#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,c;
    while(cin>>n>>l>>c)
    {
        vector<int> texto(n);
        for(int i=0; i<n; i++)
        {
            string x;
            cin>>x;
            texto[i] = x.size();
        }

        int paginas=0, caractere=0, linha=0;

        
        for(int i=0; i<n; i++)
        {
            if(caractere==0) caractere+= texto[i];

            else if(caractere + texto[i]<c)
            {
                caractere += 1+ texto[i];
            }
            else
            {
                linha++;
                caractere = texto[i];

                if(linha == l)
                {
                    paginas++;
                    linha=0;
                }
            }
        }

        if(caractere > 0)
        {
            linha++;
        }

        if(linha > 0)
        {
            paginas++;
        }

        cout<<paginas<<endl;
    }
}