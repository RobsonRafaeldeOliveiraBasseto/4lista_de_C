/*NOMES: FELIPE PERLATO DA SILVA
LUAN MATOS DA SILVA
ROBSON RAFAEL DE OLIVEIRA BASSETO
WILLIAM BELUSSO BERTOL
VITOR KRINDAT */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10];

    int n;
    int i;
    int a;

    for(i=0; i<10; i++) // lê os números
    {
       printf("digite um numero: ");
       scanf("%d",&num[i]);

    }

        printf("\n\ndigite um numero de verificacao: "); // o multiplo
        scanf("%d",&n);

            printf("\n--------------------------------------\n");

    for(i=0; i<10; i++) //verifica se o número é multiplo e mostra na tela
    {
          if(num[i] % n == 0)
            printf("%d ",num[i]);
    }
            printf("\n--------------------------------------\n");
}
