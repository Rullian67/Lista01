void desenhaLinha(int tamanho){
	int i;
	for(i=1;i<=tamanho;i++)
		printf("_");
	printf("\n");	
}// fim desenhaLinha


#include <stdio.h>

void leiaVetor(int vetor[],int n){
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&vetor[i]);
}
//-----------------------------------
void escrevaVetor(int vetor[], int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d |",vetor[i]);
	printf("\n");	
}



