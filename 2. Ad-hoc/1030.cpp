#include <bits/stdc++.h>
using namespace std;

int sobrevivente(int n, int k){
    if(n == 1)  return 0;
    return (sobrevivente(n - 1, k) + k) % n;
}
// 0 2 4 61 3

int main()
{
    int rep, caso=1;
    cin>>rep;

    while(rep--)
    {
        int n,k;
        cin>>n>>k;

        cout<<"Case "<<caso<<": "<<sobrevivente(n,k)+1<<"\n";
        caso++;
    }
}