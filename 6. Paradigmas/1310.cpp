#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int custo;
        cin>>custo;

        vector<int> receita(n);
        for(int i=0; i<n; i++)
        {
            cin>>receita[i];
        }

        int lucroMax=0;

        for(int i=0; i<n; i++)
        {
            int lucro=0;
            for(int j=i; j<n; j++)
            {
                lucro+=receita[j] - custo;
                if(lucro> lucroMax)
                {
                    lucroMax= lucro;
                }
            }
        }

        if(lucroMax>0) cout<<lucroMax<<endl;

        else cout<<0<<endl;
    }
}