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
    int i;


    for(i=0; i<10; i++) // lê os números
    {
        printf("digite um numero: ");
        scanf("%d",&num[i]);



    }
        for(i=0; i<10; i++) // se o número for negativo ele recebe zero
        {
            if(num[i]<0)
            {
                num[i] = 0;
            }

            printf("%d ",num[i]);
        }

}
