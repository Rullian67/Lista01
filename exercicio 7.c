#include <stdio.h>
#include <stdlib.h> 

int main() {
    int N;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &N);

    int vetor1[N], vetor2[N], resultado[N],i;

        printf("Digite os valores para o primeiro vetor:\n");
            printf("Digite o valor para o elemento %d: ", i);
            scanf("%d", &vetor1[i]);

        printf("Digite os valores para o segundo vetor:\n");
            printf("Digite o valor para o elemento %d: ", i);
            scanf("%d", &vetor2[i]);
        
        printf("Gerando valores aleatórios para os vetores...\n");
        for ( i = 0; i < N; i++) {
            vetor1[i] = rand() % 100; // Gera valores entre 0 e 99
            vetor2[i] = rand() % 100;
        }
  

    // Multiplica os elementos dos vetores e coloca o resultado no vetor resultado
    for ( i = 0; i < N; i++) {
        resultado[i] = vetor1[i] * vetor2[i];
    }

    // Exibe o vetor resultado
    printf("Vetor resultado:\n");
    for ( i = 0; i < N; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}

