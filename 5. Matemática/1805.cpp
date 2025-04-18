#include <iostream>
using namespace std;

int main(){
    long long int A, B;
    while(cin>>A>>B){
        long long int soma=0;
        for(long long int i=A; i<=B; i++){
            soma+=i;
        }
        cout<<soma<<endl;
    }

}