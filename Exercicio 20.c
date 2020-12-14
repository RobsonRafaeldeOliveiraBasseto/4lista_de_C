/*NOMES: FELIPE PERLATO DA SILVA
LUAN MATOS DA SILVA
ROBSON RAFAEL DE OLIVEIRA BASSETO
WILLIAM BELUSSO BERTOL
VITOR KRINDAT */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int par[10];
    int imp[10];

    int i;
    int a;
    int b;

    printf("----------------------------------------------\n");

    for(i=0;i<10;i++) // ele verifica se o numero digitado é par e guarda, caso contrario ele pede para digitar novamente
    {
        printf("digite um numero par: ");
        scanf("%d",&b);

        if(b >= 0 && b <= 50 && b % 2 == 0)
        {
            par[i] = b;
        }else
            i--;



    }

    printf("\n----------------------------------------------\n");

    for(i=0;i<10;i++) // ele verifica se o numero digitado é impar e guarda, caso contrario ele pede para digitar novamente
    {
        printf("digite um numero impar: ");
        scanf("%d",&a);

        if(a >= 0 && a <= 50 && a % 2 != 0)
        {
            imp[i] = a;
        }else
            i--;


    }

    printf("\n----------------------------------------------\n");

    for(i=0;i<10;i++) // pega os numeros e printa um ao lado do outro
    {
        printf("[%d] [%d]\n",par[i],imp[i]);


    }

    printf("\n----------------------------------------------\n");

}

