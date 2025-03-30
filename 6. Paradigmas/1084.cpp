#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    string valor, valor_final;
    
    while(cin>>n>>d && n!=0 && d!=0)
    {
        cin>>valor;

        int apagar = 0;

        for(char c : valor)
        {
            while(valor_final.size()>0 && c > valor_final.back() && apagar<d)
            {
                valor_final.pop_back();
                apagar++;
            }

            if(valor_final.size() < n-d) valor_final.push_back(c);
            
        }

        cout<<valor_final<<endl;
        valor_final.clear();
    }
}