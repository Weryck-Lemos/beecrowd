#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();

    while(n--)
    {
        string txt;
        getline(cin,txt);

        bool space= true;

        for(auto c : txt)
        {
            if(c != ' ' && space)
            {
                cout<<c;
                space = false;
            }

            else if(c==' ') space=true;
        }

        cout<<endl;
    }
}