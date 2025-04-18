#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    long long estrelas[N];
    bool visitado[N] = {false};
    for(int i = 0; i < N; i++) {
        cin >> estrelas[i];
    }

    int pos = 0;
    int estrelasAtacadas = 0;
    long long carneirosNaoRoubados = 0;

    while(pos >= 0 && pos < N) {
        if(estrelas[pos] > 0) {
            if(!visitado[pos]) {
                estrelasAtacadas++;
                visitado[pos] = true;
            }
            if(estrelas[pos] % 2 == 0) {
                estrelas[pos]--;
                pos--;
            } else {
                estrelas[pos]--;
                pos++;
            }
        } else {
            pos++;
        }
    }

    for(int i = 0; i < N; i++) {
        carneirosNaoRoubados += estrelas[i];
    }

    cout << estrelasAtacadas << " " << carneirosNaoRoubados << std::endl;

}
