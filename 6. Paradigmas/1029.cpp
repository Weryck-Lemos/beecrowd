#include <bits/stdc++.h>
using namespace std;

int cha=0;
int fib(int n)
{   
    if(!n) return 0;

    if(n==1) return 1;

    cha+=2;
    return fib(n-1) + fib(n-2);
}

int main()
{
    int rep;
    cin>>rep;

    while(rep--)
    {
        int n;
        cin>>n;

        int result = fib(n);
        cout<<"fib("<<n<<") = "<<cha<<" calls = "<<result<<endl;
        cha=0;
    }
}