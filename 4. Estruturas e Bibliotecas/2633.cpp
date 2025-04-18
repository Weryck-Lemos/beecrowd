#include <bits/stdc++.h>
using namespace std;

struct churras
{
    string peca;
    int data;
};

bool compara(churras a, churras b)
{
    return a.data < b.data;
}

int main()
{
    int n;
    while(cin>>n)
    {
        vector<churras> m(n);
        for(int i=0; i<n; i++)
        {
            cin>>m[i].peca>>m[i].data;
        }

        sort(m.begin(), m.end(), compara);

        for(size_t i=0; i<m.size(); i++)
        {
            cout<<m[i].peca;
            if(i<m.size()-1)cout<<" ";
        }

        cout<<endl;
    }
}