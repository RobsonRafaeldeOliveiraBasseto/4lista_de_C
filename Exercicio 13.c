/*NOMES: LUAN MATOS DA SILVA
 FELIPE PERLATO DA SILVA
ROBSON RAFAEL DE OLIVEIRA BASSETO
WILLIAM BELUSSO BERTOL
VITOR KRINDAT */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,v[5], menor, maior, posMaior, posMenor;

    for(i=0;i<5;i++){
    printf("Digite o valor da posicao %i: ", i);
    scanf("%i", &v[i]);
    }

    maior = v[0];
    posMaior = 0;
    for(i=1;i<5;i++){
        if(v[i] > maior){
            maior = v[i];
            posMaior = i;
        }
    }

    menor = v[0];
    posMenor = 0;
    for(i=1;i<5;i++){
        if(v[i] < menor){
            menor = v[i];
            posMenor = i;
        }
    }

     printf("Vetores: ");
     for(i=0;i<5;i++){
     printf("%i ", v[i]);
    }

    printf("\nO maior valor: %i - posicao: %i", maior, posMaior+1);
    printf("\nO menor valor: %i - posicao: %i", menor, posMenor+1);

    return 0;
}
