#include <iostream>
using namespace std;

int main(){
    int ano;
    bool primeiro = true;

    while(cin>>ano){
        if (!primeiro) cout << endl;
        primeiro = false;

        if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
            cout << "This is leap year." << endl;
            if (ano % 15 == 0) {
                cout << "This is huluculu festival year." << endl;
            }
            if (ano % 55 == 0) {
                cout << "This is bulukulu festival year." << endl;
            }
        } else if (ano % 15 == 0) {
            cout << "This is huluculu festival year." << endl;
        } else {
            cout << "This is an ordinary year." << endl;
        }
    }

    return 0;
}
