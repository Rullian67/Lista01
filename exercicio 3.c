#include <stdio.h>
#include "biblioteca.h"

int encontrarMaior(int vetor[], int tamanho) {
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    return maior;
}
int main(){
	int vet[100],n;
	printf("Qtde de elementos do vetor:");
	scanf("%d",&n);
	printf("Digite os dados para o vetor:");
	leiaVetor(vet,n);
	printf("Vetor recebido:\n");
	escrevaVetor(vet,n);
	
	int maior = encontrarMaior(vet,n);
	
	printf("O maior elemento e: %d \n",maior);
	
	return 0;
}

