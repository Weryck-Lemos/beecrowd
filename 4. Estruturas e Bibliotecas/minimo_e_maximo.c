#include <stdio.h>

int total_digitos(int num){
    int soma = 0;
    while(num !=0 ){
        soma += num%10;
        num /=10;
    }

    return soma;
}

int main(){
    int s, a ,b;
    scanf("%d %d %d", &s, &a, &b);

    int menor = -1, maior = -1;

    for(int i=a; i<=b; i++){
        if(total_digitos(i) == s ){
            if(menor == -1){
                menor = i;
            }

            maior = i;
        }
    }

    printf("%d\n%d\n", menor, maior);
}