/*NOMES: FELIPE PERLATO DA SILVA
LUAN MATOS DA SILVA
ROBSON RAFAEL DE OLIVEIRA BASSETO
WILLIAM BELUSSO BERTOL
VITOR KRINDAT */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x, num[6];
    printf("Digite 6 numeros inteiros.\n");
    for (i = 0; i < 6; i++) {
        printf("Digite o %d valor: ",i);
        scanf("%d", &num[i]);
        x=num[i];
    }
    printf("\n RESULTADO\n");
    for(i=0;i<6;i++){

        printf("%d ",num[i]);
    }



    return 0;
}
