#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n && n!=0)
    {
        while(true)
        {
            vector<int> perm(n);
            cin>>perm[0];
            if(perm[0]== 0){
                cout<<endl;
                break;
            } 

            for(int i=1; i<n; i++)
            {
                cin>>perm[i];
            }

            stack<int> estacao;
            int current = 1;
            bool possible = true;

            for(int i=0; i<n; i++)
            {
                while(current <= perm[i])
                {
                    estacao.push(current);
                    current++;
                }

                if(estacao.top() == perm[i])
                {
                    estacao.pop();
                }
                else{
                    possible = false;
                    break;
                }
            }

            if(possible) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;

        }
    }
}