******************************************************************************
. Escreva um programa que imprima todos os números inteiros de 100 a 1 (em ordem
decrescente).

*******************************************************************************/
#include <stdio.h>

int main()
{
    int icont;
    for(icont=100;icont>=0;icont--)
    {
        printf("%i\n",icont);
    }

    return 0;
}