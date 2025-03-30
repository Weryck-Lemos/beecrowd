#include <iostream>
using namespace std;

int main(){
    int monica, filho1, filho2;
    cin>>monica>>filho1>>filho2;

    int filho3 = monica - (filho1+filho2);

    cout<<max(filho3,max(filho2,filho1))<<endl;
}