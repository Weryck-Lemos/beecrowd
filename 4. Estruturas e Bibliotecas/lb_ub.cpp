#include <bits/stdc++.h>
using namespace std;

int main()
{   //                      lb    ub
    //                       V     V 
    vector<int> v = {1,2,2,3,3,4,4,4};

    int lb = lower_bound(v.begin(), v.end(), 4) - v.begin();
    int ub = upper_bound(v.begin(), v.end(), 4) - v.begin();

    cout<<lb<<endl<<ub<<endl;

    //saber quantas vezes aparece ub - lb
    cout<<ub-lb<<endl;
}