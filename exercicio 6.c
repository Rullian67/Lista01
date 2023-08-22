#include <stdio.h>
#include <stdlib.h> 
int main() {
    int N, numero,i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    int vetor[N];

    for ( i = 0; i < N; i++) {
        vetor[i] = rand() % 100 + 1;
    }

    printf("Vetor gerado aleatoriamente:\n");
    for ( i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Digite um numero para verificar se esta no vetor: ");
    scanf("%d", &numero);

    int posicao = -1;

    for ( i = 0; i < N; i++) {
        if (vetor[i] == numero) {
            posicao = i;
            break;
        }
    }

    if (posicao != -1) {
        printf("O numero %d foi encontrado na posiçao %d do vetor.\n", numero, posicao);
    } else {
        printf("O numero %d não foi encontrado no vetor.\n", numero);
    }

    return 0;
}

