/*NOMES: FELIPE PERLATO DA SILVA
LUAN MATOS DA SILVA
ROBSON RAFAEL DE OLIVEIRA BASSETO
WILLIAM BELUSSO BERTOL
VITOR KRINDAT */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int x[5];
int y[5];
int diferenca[5];
int intersecao[5];
int uniao[10];

void somaEntreVetores() {
    printf("--- Soma entre vetores ---\n");

    for (int i = 0; i < 5; i++) {
        int soma = x[i] + y[i];

        printf("O valor da soma de X %d e Y %d eh: %d\n", x[i], y[i], soma);
    }

    printf("--------------------------------\n");
}

void produtoEntreVetores() {
    printf("--- Multiplicação entre vetores ---\n");

    for (int i = 0; i < 5; i++) {
        int multiplicacao = x[i] * y[i];

        printf("O valor da multiplicacao de X %d e Y %d eh: %d\n", x[i], y[i], multiplicacao);
    }

    printf("-------------------------------\n");
}

void populaVetorDiferencaEntreVetores() {

    for (int i = 0; i < 5; i++) {

        int isNumeroIgualX = 0;

        for (int j = 0; j < 5; j++) {

            if (x[i] == y[j]) {

                isNumeroIgualX = 1;
            }
        }

        if (isNumeroIgualX == 0) {

            diferenca[i] = x[i];
        }
    }

    printf("--- Diferenca entre vetores ---\n");

    imprimirVetores(diferenca, 5);

    printf("--------------------------------\n");
}

void populaVetorIntersecao() {

    for (int i = 0; i < 5; i++) {

        for (int j = 0; j < 5; j++) {

            if (x[i] == y[j]) {
                intersecao[i] = x[i];
            }
        }
    }

    printf("--- Intersecao entre vetores ---\n");

    imprimirVetores(intersecao, 5);

    printf("--------------------------------\n");
}

void populaVetorUniao() {

    for (int c = 0; c < 5; c++) {
        uniao[c] = x[c];
    }

    for (int i = 0; i <= 5; i++) {
        int valorJaInseridoUniao = 0;

        for (int j = 0; j < 5; j++) {

            if (y[i] == uniao[j]) {
                valorJaInseridoUniao = 1;
            }
        }

        if (valorJaInseridoUniao == 0) {
            uniao[i + 5] = y[i];
        }
    }

    printf("--- Uniao entre vetores ---\n");

    imprimirVetores(uniao, 10);

    printf("--------------------------------\n");
}

void imprimirVetores(int vetor[5], int valorRepeticao) {

    for (int i = 0; i < valorRepeticao; i++) {

        if (vetor[i] > 0) {

            printf("%d\n", vetor[i]);
        }
    }
}

int main() {
    setlocale(LC_ALL, "");

    for (int i = 0; i < 5; i++) {

        printf("Preencha o valor do vetor1 numero %d\n", i);
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < 5; i++) {

        int valorAlocar = 0;

        printf("Preencha o valor do vetor2 numero %d\n", i);
        scanf("%d", &y[i]);
    }

    system("cls");

    somaEntreVetores();
    produtoEntreVetores();
    populaVetorDiferencaEntreVetores();
    populaVetorIntersecao();
    populaVetorUniao();

    return 0;
}


