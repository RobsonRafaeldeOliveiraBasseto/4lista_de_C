/*NOMES: FELIPE PERLATO DA SILVA
LUAN MATOS DA SILVA
ROBSON RAFAEL DE OLIVEIRA BASSETO
WILLIAM BELUSSO BERTOL
VITOR KRINDAT */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[50];
    int i;

    for(i=0; i<50; i++) // atribui a formula da questão e mostra os resultados na tela
    {
        num[i] = (i + 5 * i) % (i + 1);
        printf("%d\n",num[i]);

    }

}
