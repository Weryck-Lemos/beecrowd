#include <bits/stdc++.h>
using namespace std;

int n, m;

bool compara(int a, int b)
{
    int modA = a%m;
    int modB = b%m;

    if(modA != modB)
    {
        return modA<modB;
    }

    bool parA = a%2 == 0;
    bool parB = b%2 == 0;

    if(parA && !parB)
    {
        return false;
    }

    if(!parA && parB)
    {
        return true;
    }

    if(parA && parB)
    {
        return a<b;
    }

    if(!parA && !parB)
    {
        return a>b;
    }
    return false;
}

int main()
{
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
        {
            cout<<"0 0"<<endl;
            return 0;
        }

        vector<int> num(n);
        for(int i=0; i<n; i++)
        {
            cin>>num[i];
        }

        sort(num.begin(), num.end(), compara);


        cout<<n<<" "<<m<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<num[i]<<endl;
        }
    }
}