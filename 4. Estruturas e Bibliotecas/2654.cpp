#include <bits/stdc++.h>
using namespace std;

struct godofor{
    string nome;
    int poder;
    int matou;
    int morreu;

    bool operator<(const godofor& outro) const{
        if(poder != outro.poder){
            return poder> outro.poder;
        }

        if(matou != outro.matou){
            return matou > outro.matou;
        }

        if(morreu != outro.morreu){
            return morreu < outro.morreu;
        }

        return nome < outro.nome;
    }

};

int main(){
    int n;
    cin>>n;

    vector<godofor> candidato(n);

    for(int i=0; i<n; i++){
        cin>>candidato[i].nome>> candidato[i].poder>>candidato[i].matou >> candidato[i].morreu;
    }

    sort(candidato.begin(), candidato.end());

    cout<<candidato[0].nome<<endl;
}