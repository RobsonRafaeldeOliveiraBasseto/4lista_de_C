/*NOMES: FELIPE PERLATO DA SILVA
LUAN MATOS DA SILVA
ROBSON RAFAEL DE OLIVEIRA BASSETO
WILLIAM BELUSSO BERTOL
VITOR KRINDAT */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[5];
    int num2[5];
    int i;
    int j;
    int n=0;

    for(i=0; i<5; i++) // lê os números
    {
        printf("digite um numero: ",i);
        scanf("%d",&num[i]);
    }


     for(i=0;i<5;i++) // remove os números duplicados
    {
        for(j=0;j<n;j++)
        {
            if(num[i] == num2[j] )
                break;
        }

        if(j==n)
        {
            num2[n] = num[i];
            n++;
        }
    }
        printf("\n--------------------------------------------------\n");
        printf("Numeros nao duplicados: ");

            for( i = 0; i < n; i++ ) // printa os números sem as duplicações
                {
                    printf("%d ", num2[i] );
                    }

        printf("\n--------------------------------------------------\n");

}
