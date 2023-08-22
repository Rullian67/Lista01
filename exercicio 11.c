#include <stdio.h>

int main() {
    float notas[5];
    float menorNota, maiorNota, somaNotas = 0;

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

