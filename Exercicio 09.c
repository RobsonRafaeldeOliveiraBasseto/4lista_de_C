/*NOMES: LUAN MATOS DA SILVA
 FELIPE PERLATO DA SILVA
ROBSON RAFAEL DE OLIVEIRA BASSETO
WILLIAM BELUSSO BERTOL
VITOR KRINDAT */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    char seq[6], seqInv[6];
    int i, j, tam;

    printf("Digite uma sequencia de numeros:");
    scanf("%s", seq);

    tam=0;
    while(seq[tam] != '\0' && tam<6) {
        tam++;
    }

    j = tam - 1;
    i = 0;
    while(i<tam) {
        seqInv[j] = seq[i];
        i++;
        j--;
    }
    seqInv[tam] = '\0';

    int par = 1;

    for(i=0; i<tam; i++){
        if(seq[i] % 2 != 0){
           par = 0;
           break;
        }
    }

    if(par == 1){
        printf("A sequencia invertida é:%s\n", seqInv);
    }else{
        printf("A sequencia esta errada!");
    }


    return 0;
}
