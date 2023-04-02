/******************************************************************************
Escreva um programa que leia um valor e imprima todas as possíveis combinações em
que o lançamento de um par de dados tenha como resultado da soma dos valores dos
dados o número lido. Por exemplo, se a entrada for o número 7, o programa deve
imprimir as seguintes combinações:
• 1 6
• 2 5
• 3 4
• 4 3
• 5 2
• 6 1


*******************************************************************************/
#include <stdio.h>

int main()
{
    int dado1,dado2;
    int numero;
    printf("informe um numero\n");
    scanf("%i",&numero);
    for(dado1=1;dado1<=6;dado1++)
    {
        for(dado2=1;dado2<=6;dado2++)
        {
            if(dado1+dado2==numero)
            {
                printf("%i=%i+%i\n",numero,dado1,dado2);
            }
        }
    }
    return 0;
}
