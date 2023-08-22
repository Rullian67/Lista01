#include <stdio.h>

int main() {
    int N,i;

    printf("Digite o numero de lancamentos do dado: ");
    scanf("%d", &N);

    int vetor[N];

    printf("Digite os resultados dos lancamentos:\n");
    for ( i = 0; i < N; i++) {
        printf("Lancamento %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] < 1 || vetor[i] > 6) {
            printf("Resultado invalido. Insira um numero entre 1 e 6.\n");
            i--; 
        }
    }

    int cont[6] = {0};

    for ( i = 0; i < N; i++) {
        cont[vetor[i] - 1]++; 
    }

    printf("Numero de ocorrencias de cada face:\n");
    for ( i = 0; i < 6; i++) {
        printf("Face %d: %d ocorrencia(s)\n", i + 1, cont[i]);
    }

    return 0;
}

