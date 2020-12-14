/*NOMES: FELIPE PERLATO DA SILVA
LUAN MATOS DA SILVA
ROBSON RAFAEL DE OLIVEIRA BASSETO
WILLIAM BELUSSO BERTOL
VITOR KRINDAT */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int a;
int b;
int vetorA[5];
int vetorB[5];

void popularVetor(int vetor[5], int valor) {

    for (int i = 0; i < 5; i++) {

        int valorAInserir = valor % 10; // separa o ultimo numero
        valor = valor / 10; // restante do valor

        vetor[i] = valorAInserir;
    }
}

void somarVetores() {
    int deveSomar1 = 0;
    int deveInserirNoLaco = 0;

    for (int i = 0; i < 5; i++) {

        int soma = vetorA[i] + vetorB[i];

        if (soma >= 10) {

            soma = soma - 10;
            deveSomar1 = 1;
        }

        if (deveSomar1 == 1 && deveInserirNoLaco == 1) {

            vetorA[i] = soma + 1;
            deveSomar1 = 0;
            deveInserirNoLaco = 0;

        } else if (deveSomar1 == 1 && deveInserirNoLaco == 0) {

            vetorA[i] = soma;
            deveInserirNoLaco = 1;
        } else {

            vetorA[i] = soma;
        }
    }
}

void imprimirVetor(int vetor[5]) {

    for (int i = 0; i < 5; i++) {

        printf("Posicao %d valor do vetor: %d\n", i, vetor[i]);
    }
}

int main() {
    setlocale(LC_ALL, "");

    printf("Digite o valor de A até 10000 \n");
    scanf("%d", &a);

    printf("Digite o valor de B até 10000 \n");
    scanf("%d", &b);

    if (a < 1 || a > 10000 || b < 1 || b > 10000) {
        printf("O valor digitado deve ser menor que 10000.");
        return;
    }

    system("cls");

    popularVetor(vetorA, a);
    popularVetor(vetorB, b);

    printf("\n --- Vetor A --- \n");
    imprimirVetor(vetorA);

    printf("\n --- Vetor B --- \n");
    imprimirVetor(vetorB);

    somarVetores();

    printf("\n --- Vetor soma entre vetores --- \n");
    imprimirVetor(vetorA);

    return 0;
}





