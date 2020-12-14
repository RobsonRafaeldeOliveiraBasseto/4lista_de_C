/*NOMES: FELIPE PERLATO DA SILVA
LUAN MATOS DA SILVA
ROBSON RAFAEL DE OLIVEIRA BASSETO
WILLIAM BELUSSO BERTOL
VITOR KRINDAT */
#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i, maior, menor;
     int vet[10];
    for (i = 0 ; i < 10 ; i++){
        printf("Digite o valor:\n");
        scanf("%d",&vet[i]);
    }
    maior=vet[0];
    for (i=1;i<10;i++){
        if(vet[i]>maior){
            maior=vet[i];
        }
    }
    menor=vet[0];
    for(i=1;i<10;i++){
        if(vet[i]<menor){
            menor=vet[i];
        }
    }
    printf("O maior valor eh: %d \n O menor eh: %d",maior, menor);


    return 0;
    }
