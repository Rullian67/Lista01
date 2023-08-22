
#include <stdio.h>
#include <string.h>

int main() {
    char mensagem[1001];
    int i;
    fgets(mensagem, sizeof(mensagem), stdin); // Lê a mensagem com espaços

    int tamanho = strlen(mensagem);

    for ( i = 0; i < tamanho; i++) {
        if (mensagem[i] == 'p' || mensagem[i] == 'P') {
            i++; // Pula a letra 'p' ou 'P'
            printf("%c", mensagem[i]);
        } else if (mensagem[i] != ' ') {
            printf("%c", mensagem[i]);
        }
    }

    printf("\n");

    return 0;
}

