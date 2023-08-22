 #include <stdio.h>
 #include <stdlib.h>
 int calcularSoma(int vetor[], int tamanho) {
    int soma = 0;
    for (int  i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

     return soma;
}


int main(){
	int vet[100],n;
	printf("Qtde de elementos do vetor:");
	scanf("%d",&n);
	printf("Digite os dados para o vetor:");
	leiaVetor(vet,n);
	printf("Vetor recebido:\n");
	escrevaVetor(vet,n);
	
	int soma = calcularSoma(vet,n);
	
	printf("A soma dos elementos são:%d \n",soma);
	return 0;
}

