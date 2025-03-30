#include <bits/stdc++.h>
using namespace std;

int main() {
        int E, D;

        cin >> E >> D;

        if (E > D) {
            cout << "Eu odeio a professora!" << endl;
        } 
        
        else if (D - E >= 3) {
            cout << "Muito bem! Apresenta antes do Natal!" << endl;
        } 
        
        else {
            cout<<"Parece o trabalho do meu filho!"<<endl;
            if (D < 23) {
                cout << "TCC Apresentado!" << endl;
            } else {
                cout << "Fail! Entao eh nataaaaal!" << endl;
            }
        }
    
}
