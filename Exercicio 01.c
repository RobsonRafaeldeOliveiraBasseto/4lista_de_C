/*NOMES: FELIPE PERLATO DA SILVA
LUAN MATOS DA SILVA
ROBSON RAFAEL DE OLIVEIRA BASSETO
WILLIAM BELUSSO BERTOL
VITOR KRINDAT */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[] = { 1,0,5,-2,-5,7 }; //a
    int i; //b
    printf("%d %d %d \n", A[0], A[1], A[5]); //b
    A[4] = 100;  //c
    for (i=0;i<5;i++){
    printf("%d\n", A[i]); //d
};




    return 0;
}
