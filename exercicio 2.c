#include <stdio.h>
#include "biblioteca.h"
int encontrarMenor(int vetor[], int tamanho) {
	int i;
    int menor = vetor[0];
    for ( i = 1; i < tamanho; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    return menor;
}
int main(){
	int vet[100],n;
	printf("Qtde de elementos do vetor:");
	scanf("%d",&n);
	printf("Digite os dados para o vetor:");
	leiaVetor(vet,n);
	printf("Vetor recebido:\n");
	escrevaVetor(vet,n);
	
	int menor = encontrarMenor(vet,n);
	
	printf("O menor elemento e: %d \n",menor);
	
	return 0;
}
