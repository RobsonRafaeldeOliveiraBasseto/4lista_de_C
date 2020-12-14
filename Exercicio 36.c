/*NOMES: FELIPE PERLATO DA SILVA
LUAN MATOS DA SILVA
ROBSON RAFAEL DE OLIVEIRA BASSETO
WILLIAM BELUSSO BERTOL
VITOR KRINDAT */
#include <stdio.h>
#include <stdlib.h>

void ordem(int vetor[10]);


int main()
{
    int vet[10];
    int i;


    for(i=0;i<10;i++) // lê os números do vetor
    {
        printf("Digite um numero: ");
        scanf("%d",&vet[i]);
    }
    ordem(vet);

}
void ordem(int vetor[10])
{
    int aux;
    int i;
    int j;
    int a;

    for (i=0;i<10;i++) //ordena a sequencia, os menores numeros vão para a esquerda e os maiores para a direita
            {
                for (j=0;j<10;j++)
                {
                    if (vetor[i] < vetor[j])
                    {
                        aux = vetor[i];
                        vetor[i] = vetor[j];
                        vetor[j] = aux;
                    }
                }
            }

                printf("\n\nOs numeros em ordem: ");
                printf("\n-----------------------\n");

        for (a = 0; a < 10; a++) //printa a sequencia em ordem
            {

                printf("%d ",(vetor[a]));

            }
                    printf("\n-----------------------\n");
}
