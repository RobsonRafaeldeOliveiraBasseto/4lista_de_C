/*NOMES: FELIPE PERLATO DA SILVA
LUAN MATOS DA SILVA
ROBSON RAFAEL DE OLIVEIRA BASSETO
WILLIAM BELUSSO BERTOL
VITOR KRINDAT */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int vetor[10];

void imprimirVetor() {

    for (int i = 0; i < 10; i++) {

        printf("Posicao %d valor do vetor: %d\n", i, vetor[i]);
    }
}

int validarDuplicidadeVetor(int valorComparar) {
    int valorEmDuplicidade = 1;
    int valorPodeInserir = 0;

    for (int i = 0; i < 10; i++) {

        if (vetor[i] == valorComparar) {

            return valorEmDuplicidade;
        }
    }

    return valorPodeInserir;
}

int main() {
    setlocale(LC_ALL, "");

    for (int i = 0; i < 10; i++) {

        int verdadeiro = 1;
        int valorInserir;

        printf("Preencha o valor do vetor1 numero %d\n", i);
        scanf("%d", &valorInserir);

        int valorEmDuplicidade = validarDuplicidadeVetor(valorInserir);

        if (valorEmDuplicidade == verdadeiro) {

            printf("O valor %d, não pode ser inserido, pois ja esta inserido no vetor, por favor insira outro valor.\n\n", valorInserir);

            i--;
            continue;
        } else {

            vetor[i] = valorInserir;
        }
    }

    system("cls");

    imprimirVetor();

    return 0;
}




