#include <bits/stdc++.h>
using namespace std;

typedef long double ll;

ll fib(ll n) {
    ll a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        ll temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main() {
    ll n;
    cin >> n;

    cout << fixed << setprecision(1) << fib(n) << endl;
}
