/*NOMES: FELIPE PERLATO DA SILVA
LUAN MATOS DA SILVA
ROBSON RAFAEL DE OLIVEIRA BASSETO
WILLIAM BELUSSO BERTOL
VITOR KRINDAT */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];
    int con;

    for(int i=0;i<10;i++){

    printf("digite os valores do vetor: ");
    scanf("%d",&vetor[i]);

    if(vetor[i]%2==0)
        con++;
    }
       printf("\n");
      printf("O vetor possui %d valores pares.",con);

       printf("\n");



    return 0;
}
