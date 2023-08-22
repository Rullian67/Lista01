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

