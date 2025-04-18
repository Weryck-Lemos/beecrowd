#include <iostream>
using namespace std;

int main(){
    int N, inicio=1;
    cin>>N;

    for(int i=0; i<N; i++){
        cout<<inicio<<" "<<inicio*inicio<<" "<<(inicio*inicio)*inicio<<endl;
        cout<<inicio<<" "<<(inicio*inicio)+1<<" "<<((inicio*inicio)*inicio)+1<<endl;
        inicio++;
    }
}