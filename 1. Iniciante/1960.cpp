#include <iostream>
#include <vector>
using namespace std;

string convertToRoman(int num){
    vector<int> valores ={1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> simbolos ={"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string romano;

    for(size_t i=0; i<valores.size(); i++){//coloquei size_t apenas para eliminar o aviso, pois int i pode assumir valores negativos causando erro no codigo pois valores.size é uma dado sem sinal e eu estou fazendo uma comparação
        while(num>=valores[i]){
            num-=valores[i];
            romano += simbolos[i];
        }
    }

    return romano;
}

int main(){
    int num;
    cin>>num;

    cout<<convertToRoman(num)<<endl;

}


