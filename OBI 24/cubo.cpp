#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    cout<<(n*n*n)-(8)-((n-2)*12) - (((n-2)*(n-2))*6)<<endl;

    cout<<((n-2)*(n-2))*6<<endl; //v

    cout<<(n-2)*12<<endl; //v

    cout<<8<<endl;  //v  
}