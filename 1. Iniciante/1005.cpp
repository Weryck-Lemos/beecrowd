#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double A,B;
    cin >> A >> B;

    double MEDIA = (3.5*A+B*7.5)/11;
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << MEDIA << endl;
}