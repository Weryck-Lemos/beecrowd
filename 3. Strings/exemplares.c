#include <stdio.h>

void setsort(int vetor[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    int tamanhoNovo = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || vetor[i] != vetor[i - 1]) {
            vetor[tamanhoNovo++] = vetor[i];
        }
    }

    for (int i = 0; i < tamanhoNovo; i++) {
        printf("%d", vetor[i]);
        if(i<tamanhoNovo-1){
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    int vetor[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    setsort(vetor, n);

    return 0;
}
