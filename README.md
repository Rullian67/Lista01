# Lista01
Exercicio 1
 int calcularSoma(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
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
	
	printf("A soma dos elementos são:%d \n",soma)
	return 0;
}

Exercicio 2
#include <stdio.h>
#include "biblioteca.h"
int encontrarMenor(int vetor[], int tamanho) {
    int menor = vetor[0];
    for (int i = 1; i < tamanho; i++) {
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
Exercicio 3
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

Exdercicio 4
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

Exercicio 5

#include <stdio.h>
int main() {
    int N, valor,i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    int vetor[N];

    printf("Digite os valores para o vetor:\n");
    for ( i = 0; i < N; i++) {
        printf("Digite o valor para o elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor que deseja verificar: ");
    scanf("%d", &valor);

    int cont = 0;

    printf("Vetor lido:\n");
    for ( i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
        if (vetor[i] == valor) {
            cont++;
        }
    }
    printf("\n");

    if (cont > 0) {
        printf("O valor %d aparece %d vezes no vetor.\n", valor, cont);
    } else {
        printf("O valor %d não foi encontrado no vetor.\n", valor);
    }

    return 0;
}

Exercicio 6

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

Exercicio 7
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &N);

    int vetor1[N], vetor2[N], resultado[N],i;

    printf("Deseja preencher os vetores manualmente (0) ou gerar valores aleatórios (1)? ");
    int opcao;
    scanf("%d", &opcao);

    if (opcao == 0) {
        printf("Digite os valores para o primeiro vetor:\n");
        for ( i = 0; i < N; i++) {
            printf("Digite o valor para o elemento %d: ", i);
            scanf("%d", &vetor1[i]);
        }

        printf("Digite os valores para o segundo vetor:\n");
        for ( i = 0; i < N; i++) {
            printf("Digite o valor para o elemento %d: ", i);
            scanf("%d", &vetor2[i]);
        }
    } else if (opcao == 1) {
        printf("Gerando valores aleatórios para os vetores...\n");
        for ( i = 0; i < N; i++) {
            vetor1[i] = rand() % 100; 
            vetor2[i] = rand() % 100;
        }
    } else {
        printf("Opção inválida.\n");
        return 1;
    }
    for ( i = 0; i < N; i++) {
        resultado[i] = vetor1[i] * vetor2[i];
    }
    printf("Vetor resultado:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}
Exercicio 8

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

Exercicio 9

#include <stdio.h>
#include <string.h> )

int main() {
    char vetor[100],i;

    printf("Digite um vetor de caracteres: ");
    gets(vetor); 
    int tamanho = strlen(vetor); 

    printf("Vetor lido em ordem inversa:\n");
    for ( i = tamanho - 1; i >= 0; i--) {
        printf("%c", vetor[i]);
    }
    printf("\n");

    return 0;
}
Exercicio 10

#include <stdio.h>
#include <string.h> 

int main() {
    char dna[50];
    char complementar[50];
	int i;
    printf("Digite o vetor de bases do DNA (A, T, C, G): ");
    scanf("%s", dna);

    int tamanho = strlen(dna);

    for ( i = 0; i < tamanho; i++) {
        switch (dna[i]) {
            case 'A':
                complementar[i] = 'T';
                break;
            case 'T':
                complementar[i] = 'A';
                break;
            case 'C':
                complementar[i] = 'G';
                break;
            case 'G':
                complementar[i] = 'C';
                break;
            default:
                printf("Caractere inválido no vetor de DNA.\n");
                return 1;
        }
    }

    complementar[tamanho] = '\0';

    printf("Vetor complementar do DNA:\n%s\n", complementar);

    return 0;
}
Exercicio 11

#include <stdio.h>

int main() {
    float notas[5];
    float menorNota, maiorNota, somaNotas = 0;
	int i;
    for ( i = 0; i < 5; i++) {
        scanf("%f", &notas[i]);

        if (i == 0) {
            menorNota = notas[i];
            maiorNota = notas[i];
        } else {
            if (notas[i] < menorNota) {
                menorNota = notas[i];
            }
            if (notas[i] > maiorNota) {
                maiorNota = notas[i];
            }
        }

        somaNotas += notas[i];
    }

    float notaFinal = somaNotas - menorNota - maiorNota;

    printf("%.1f\n", notaFinal);

    return 0;
}
Exercicio 12

#include <stdio.h>
#include <string.h>

int main() {
    char mensagem[1001];
    int i;
    fgets(mensagem, sizeof(mensagem), stdin);

    int tamanho = strlen(mensagem);

    for ( i = 0; i < tamanho; i++) {
        if (mensagem[i] == 'p' || mensagem[i] == 'P') {
            i++;
            printf("%c", mensagem[i]);
        } else if (mensagem[i] != ' ') {
            printf("%c", mensagem[i]);
        }
    }

    printf("\n");

    return 0;
}
