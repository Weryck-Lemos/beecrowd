#include <bits/stdc++.h>
using namespace std;
#define MAXN 100010

int n, x;
vector<int> vetor(MAXN);

int busca(int num)
{
    int esq=0, dir=n, meio=0;

    while(esq < dir)
    {
        meio = (esq + dir)/2;

        if(vetor[meio] == num) return meio;
        if(vetor[meio]<num) esq = meio+1;
        if(vetor[meio]>num) dir = meio-1;
    }
    return -1;
}

int main()
{
    cin>>n;
   for(int i=1; i<=n; i++)
   {
    cin>> vetor[i];
   }

    sort(vetor.begin(), vetor.end());

    cin>>x;
    if(busca(x) == -1) cout<<"num tem :("<<endl;
    else cout<<busca(x)<<endl;  


}