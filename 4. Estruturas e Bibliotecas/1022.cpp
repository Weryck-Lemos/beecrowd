#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b)
{
    if(b==0) return a;
    return mdc(b, a%b);
}

void simplify(int num, int den)
{
    int dc = mdc(num, den);
    num/=  dc;
    den /= dc;

    if(den<0)
    {
        num = -num;
        den = -den;
    }

    cout<<num<<'/'<<den<<endl;
}

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int num1, den1, num2, den2;
        char op, div;

        cin>>num1>>div>>den1>> op >>num2>>div>>den2;

        int num_resp=0, den_resp=0;

        if(op=='*')
        {
            num_resp = num1*num2;
            den_resp = den1*den2;
        }

        else if(op=='/')
        {
            num_resp = num1* den2;
            den_resp = num2 * den1;
        }

        else if(op=='+')
        {
            den_resp = den2 * den1;
            num_resp = (num1*den2) + (num2*den1);
        }

        else
        {
            den_resp = den2 * den1;
            num_resp = (num1*den2) - (num2*den1);
        }
        

        cout<<num_resp<<'/'<< den_resp<<" = ";

        simplify(num_resp, den_resp);
    }
}