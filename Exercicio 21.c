/*NOMES: FELIPE PERLATO DA SILVA
LUAN MATOS DA SILVA
ROBSON RAFAEL DE OLIVEIRA BASSETO
WILLIAM BELUSSO BERTOL
VITOR KRINDAT */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int b[10];
    int c[10];

    int i;
                printf("--------------------------------------\n");
                printf("digite um numero para o primeiro vetor\n");
                printf("--------------------------------------\n\n");

    for(i=0;i<10;i++) //le os numeros do primeiro vetor
    {
        printf("digite um numero: ");
        scanf("%d",&a[i]);
    }

                printf("--------------------------------------\n");
                printf("digite um numero para o segundo vetor\n");
                printf("--------------------------------------\n\n");

    for(i=0;i<10;i++) //le os numeros do segundo vetor
    {
        printf("digite um numero: ");
        scanf("%d",&b[i]);
    }

                printf("\n------------------------------------------\n");
    for(i=0;i<10;i++) // pega os numeros do primeiro e do segundo vetor e subtrai
    {
        c[i] = a[i] - b[i];
        printf("[%d] - [%d] = [%d]\n",a[i],b[i],c[i]);
    }
                printf("\n------------------------------------------\n");






}
