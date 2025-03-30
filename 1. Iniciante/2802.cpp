#include <iostream>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    long long int valor = 1 + (((n-1)*n)/2) + (((n)*(n - 1) *(n - 2 ) *(n - 3))/24);
    
    

    cout << valor << endl;
    return 0;
}
