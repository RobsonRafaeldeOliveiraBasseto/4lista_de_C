/*NOMES: LUAN MATOS DA SILVA
 FELIPE PERLATO DA SILVA
ROBSON RAFAEL DE OLIVEIRA BASSETO
WILLIAM BELUSSO BERTOL
VITOR KRINDAT */
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, x, v[10];

    for(i=0;i<10;i++){
        printf("Digite o valor da posicao %i: ", i);
        scanf("%i", &v[i]);
    }

    for(i=0;i<10;i++){
        for(x=i+1;x<10;x++){
            if(v[i]==v[x]){
                printf("\nO valor %i se repete",v[i]);
            }
        }
    }

    return 0;
}
