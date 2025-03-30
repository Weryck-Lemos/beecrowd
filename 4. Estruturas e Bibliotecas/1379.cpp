#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a, b;
    while (true) {
        
        cin >> a >> b;
        if (!a && !b)
            exit(0);
            
        cout << 2 * a - b << endl;
    }

    return 0;
}