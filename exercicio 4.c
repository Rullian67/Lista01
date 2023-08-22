#include <stdio.h>
#include "biblioteca.h"

int contarImpar(int vetor[], int tamanho) {
	int cont=0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 != 0) {
            cont++;
        }
    }

    return cont;
}
int main(){
	int vet[100],n;
	printf("Qtde de elementos do vetor:");
	scanf("%d",&n);
	printf("Digite os dados para o vetor:");
	leiaVetor(vet,n);
	printf("Vetor recebido:\n");
	escrevaVetor(vet,n);
	
	int impar = contarImpar(vet,n);
	
	printf("A quantidade de impares e: %d \n",impar);
	
	return 0;
}

