#include <bits/stdc++.h>
using namespace std;

int contagem(int n) {
    int count = 0;
    for(int i=5; n/i >=1; i *=5)
    {
        count += n/i;
    }

    return count;
    
}

int main() {
    int n;
    cin>>n;

    cout << contagem(n) << endl;
    
    return 0;
}