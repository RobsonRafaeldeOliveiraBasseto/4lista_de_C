/*NOMES: FELIPE PERLATO DA SILVA
LUAN MATOS DA SILVA
ROBSON RAFAEL DE OLIVEIRA BASSETO
WILLIAM BELUSSO BERTOL
VITOR KRINDAT */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[6];

    for(int i=0; i<6; i++){

        printf("digite os valores do vetor: \n");
        scanf("%d",&vetor[i]);

    }
       printf("\nRESULTADO\n");
        for(int i=5; i>=0; i--){

        printf("%d ",vetor[i]);



        }






    return 0;
}
