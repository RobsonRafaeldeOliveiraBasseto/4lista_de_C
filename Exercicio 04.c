/*NOMES: FELIPE PERLATO DA SILVA
LUAN MATOS DA SILVA
ROBSON RAFAEL DE OLIVEIRA BASSETO
WILLIAM BELUSSO BERTOL
VITOR KRINDAT */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[8], x, y, b, a,soma;

    for(int i=0; i<8; i++)
    {
        printf("entre com o valor do vetor:");
        scanf("%d", &vetor);
    }

    printf("informe a 1ª posicao x:");
    scanf("%d", &x);


    printf("informe a segunda posicao y:");
    scanf("%d", &y);

    a = vetor[x];
    b = vetor[y];

    soma = a + b;

    printf("a soma dos valores das posicoes x e y eh: %d", soma);





    return 0;
}
