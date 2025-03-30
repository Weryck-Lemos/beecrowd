#include <bits/stdc++.h>
using namespace std;

int main()
{
    string d;
    set<string> answer;
    
    while(cin>>d)
    {
        answer.insert(d);
    }

    cout<<answer.size()<<endl;
    
}