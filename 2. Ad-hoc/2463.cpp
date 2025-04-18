#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin>>n;

    vector<int> corredor(n);
    for(int i=0; i<n; i++)
    {
        cin>>corredor[i];
    }

    int maxFinal= corredor[0], maxAtual= corredor[0];
    for(int i=1; i<n; i++)
    {
        maxAtual = max(corredor[i], maxAtual + corredor[i]);

        if(maxAtual > maxFinal)
        {
            maxFinal = maxAtual;
        }
    }

    cout<<maxFinal<<endl;
}