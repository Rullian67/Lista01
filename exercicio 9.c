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

