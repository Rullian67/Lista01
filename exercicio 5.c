#include <stdio.h>
int main(){
	int vet[n],n,valor, i;
	cont = 0;
	printf("Qtde de elementos do vetor:");
	scanf("%d",&n);
	printf("Digite os dados para o vetor:");
	for ( i = 0; i < N; i++) {
    	printf("Digite o valor para o elemento %d: ", i);
    	scanf("%d", &vetor[i]);
    }
    printf("Digite o valor que deseja verificar: ");
    scanf("%d", &valor);
    
	printf("Vetor recebido:\n");
	escrevaVetor(vet,n);
	
for (int i = 0; i < N; i++) {
        
       
printf("%d ", vetor[i]);
        if (vetor[i] == valor) {
            contador++;
        }
    }
    
            contador++;
        }
	}

           
printf("\n");

    if (contador > 0) {
        printf("O valor %d aparece %d vez(es) no vetor.\n", valor, contador);
    } else {
        printf("O valor %d não foi encontrado no vetor.\n", valor);
    }

	return 0;
}
