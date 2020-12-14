/*NOMES: LUAN MATOS DA SILVA
 FELIPE PERLATO DA SILVA
ROBSON RAFAEL DE OLIVEIRA BASSETO
WILLIAM BELUSSO BERTOL
VITOR KRINDAT */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10],i,s=0;
    int negativo=0;

    for(i=0;i<10;i++){
        printf("Escreva o valor da posicao %i: ", i);
        scanf("%i", &v[i]);

          if(v[i]<0){
            negativo++;
         }

          if(v[i]>=0){
            s=s+v[i];
         }
    }

    printf("a soma dos numeros positivos e: %d\n", s);
    printf("quantidade de numeros negativos digitados eh: %d\n", negativo);
    return 0;
}
