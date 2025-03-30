#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<int> pares;
    vector<int> impares;

    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        if(num%2==0)
            pares.push_back(num);

        else
            impares.push_back(num);
    }

    sort(pares.begin(), pares.end());
    sort(impares.rbegin(), impares.rend());

    for(int c : pares){
        cout<<c<<endl;
    }
    for(int c : impares){
        cout<<c<<endl;
    }
}