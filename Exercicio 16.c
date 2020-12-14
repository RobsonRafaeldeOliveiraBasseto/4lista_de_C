/*NOMES: FELIPE PERLATO DA SILVA
LUAN MATOS DA SILVA
ROBSON RAFAEL DE OLIVEIRA BASSETO
WILLIAM BELUSSO BERTOL
VITOR KRINDAT */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[5];
    int i;
    int a;
    int b;

    for(i=0; i<5; i++) //lê os números e mostra as opções
    {
        printf("digite um numero: ");
        scanf("%d", &numeros[i]);
    }
        printf("\n\ndigite uma opcao [0] [1] [2]: ");
        scanf("%d",&b);

    if(b==0) //opção 0 que finaliza
    {
        printf("\n--------------------------------\n");
        printf("programa finalizado");
        printf("\n--------------------------------\n");

    }else if(b==1) // opção 1 mostra os números em sequência
        {
            printf("\n--------------------------------\n");
            printf("%d ",numeros[0]);
            printf("%d ",numeros[1]);
            printf("%d ",numeros[2]);
            printf("%d ",numeros[3]);
            printf("%d ",numeros[4]);
            printf("\n--------------------------------\n");

        }else if(b==2) //opção 2 mostra os números em sequência invertida
        {
            printf("\n--------------------------------\n");
            printf("%d ",numeros[4]);
            printf("%d ",numeros[3]);
            printf("%d ",numeros[2]);
            printf("%d ",numeros[1]);
            printf("%d ",numeros[0]);
            printf("\n--------------------------------\n");
        }else // se o número não for alguma das opções
        {
            printf("\n--------------------------------\n");
            printf("Codigo invalido");
            printf("\n--------------------------------\n");
        }
}
