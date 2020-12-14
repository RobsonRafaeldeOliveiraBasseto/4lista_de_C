/*NOMES: LUAN MATOS DA SILVA
 FELIPE PERLATO DA SILVA
ROBSON RAFAEL DE OLIVEIRA BASSETO
WILLIAM BELUSSO BERTOL
VITOR KRINDAT */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,v[5], menor, maior;
    float media;

    for(i=0;i<5;i++){
    printf("Digite o valor da posicao %i: ", i);
    scanf("%i", &v[i]);

    media += v[i];

    }

    maior = v[0];
    for(i=1;i<5;i++){
        if(v[i] > maior){
            maior = v[i];
        }
    }

    menor = v[0];
    for(i=1;i<5;i++){
        if(v[i] < menor){
            menor = v[i];
        }
    }

     printf("Vetores: ");
     for(i=0;i<5;i++){
     printf("%i ", v[i]);
    }

    printf("\nO maior valor inserido eh: %i", maior);
    printf("\nO menor valor inserido eh: %i",menor );
    printf("\nA media dos valores digitados eh: %1f", media/5.0);

    return 0;
}
