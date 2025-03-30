#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100010;

int n,c,t;
vector<int> pipocas(MAXN);

bool possivel(long long x)
{
    int competidor = 1;
    long long resta = t*x;

    for(int i=0; i<n; i++)
    {
        if(resta >= pipocas[i]) resta -=pipocas[i];
        else
        {
            competidor++;
            resta = t*x;
            i--;//eh obrigado a comer a pipoca, nao pode pular para a proxima
        }
        if (competidor > c) return 0;
    }
    return 1;
}

int main()
{
    
    cin>>n>>c>>t;

    for(int i=0; i<n; i++) cin>>pipocas[i];

    int esq=0, dir = 1e9+1;
    while(esq < dir)
    {
        int meio = (esq + dir)/2;

        if(!possivel(meio)) esq = meio+1;
        else dir = meio;
    }

    cout<<esq<<endl;
}