#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
        vector<int> p;

        for(int i=0; i<n; i++)
        {
            int ini, fim;
            cin>>ini>>fim;
            for(int j=ini; j<=fim; j++)
            {
                p.push_back(j);
            }
        }

        sort(p.begin(), p.end());

        int busca;
        cin>>busca;
        
        int lb = lower_bound(p.begin(), p.end(), busca) - p.begin();
        int ub = upper_bound(p.begin(), p.end(), busca) - p.begin();
        
        cout<<busca;
        if(p[lb] !=busca ) cout<<" not found"<<endl;

        else cout<<" found from "<<lb<<" to "<<ub-1<<endl;
    }
}