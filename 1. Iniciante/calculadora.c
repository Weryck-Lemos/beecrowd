#include <stdio.h>

int main(){
    double a,b;
    char op;
    printf("Digite dois valores e uma operacao ex(1 + 2):  ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op)
    {
        case '+': 
            printf("%lf", a+b);
            break;
        case '-': 
            printf("%lf", a-b);
            break;
        case '*': 
            printf("%lf", a*b);
            break;
        case '/': 
            if(b != 0)
                printf("%lf", a/b);
            else
                printf("Erro: Divisao por zero nao e permitida.");
            break;
        default: 
            printf("Operacao invalida.");
    }
}
