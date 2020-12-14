/*NOMES: LUAN MATOS DA SILVA
 FELIPE PERLATO DA SILVA
ROBSON RAFAEL DE OLIVEIRA BASSETO
WILLIAM BELUSSO BERTOL
VITOR KRINDAT */
#include <stdio.h>
#include <stdlib.h>

int main(){

   int i;
   float nota[15],media;

   for(i=0;i<15;i++){
   printf("Digite a nota do aluno %d: ",i+1);
   scanf("%f",&nota[i]);

   media += nota[i];

   }

   printf("A media geral dos alunos eh: %.1f",media/15.0);

   return 0;
}
