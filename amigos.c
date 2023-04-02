/******************************************************************************
Dizemos que dois números são amigos se cada um deles é igual a soma dos divisores
próprios do outro. Os divisores próprios de um número positivo N são todos os divisores
inteiros positivos de N exceto o próprio N. Um exemplo de números amigos são 284 e
220, pois os divisores próprios de 220 são 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 e 110.
Efetuando a soma destes números obtemos o resultado 284 (1 + 2 + 4 + 5 + 10 + 11 + 20
+ 22 + 44 + 55 + 110 = 284). Os divisores próprios de 284 são 1, 2, 4, 71 e 142,
efetuando a soma destes números obtemos o resultado 220 (1 + 2 + 4 + 71 + 142 = 220).
Escreva um programa que dado dois inteiros, verifique se eles são amigos. (17296 e
18416 são amigos, por exemplo

*******************************************************************************/
#include <stdio.h>

int main()
{
     int numero,numero2,icont,soma=0,soma2=0;
     printf("informe 2 valores\n");
     scanf("%i%i",&numero,&numero2);
     for(icont=1;icont<numero;icont++)
     {
         if(icont%numero==0)
         {
             soma=soma+icont;//soma os divisores propios
         }
     }
     for(icont=1;icont<numero2;icont++)
     {
        if(icont%numero2)
        {
             soma2=soma2+icont;
        }
     }
     if((numero==soma2)&&(numero2==soma))
     {
         printf("%i e %i sao numeros amigos\n",numero,numero2);
     }
     else
     {
         printf("%i e %i nao sao numeros amigos\n",numero,numero2);
     }
    return 0;
}
