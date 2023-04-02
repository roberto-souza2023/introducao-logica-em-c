/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    int icont,jcont,soma=0,soma_linha=0,soma_coluna=0;
    int matriz[2][3]={{1,2,3}
                    ,{-9,-8,14}};
    for(icont=0;icont<2;icont++)//exibir matriz
    {
        for(jcont=0;jcont<3;jcont++)
        {
            printf("%i\t",matriz[icont][jcont]);
        }
        puts("");
    }
     for(icont=0;icont<2;icont++)
    {
        soma_linha=0;
        for(jcont=0;jcont<3;jcont++)
        {
            soma+=matriz[icont][jcont];
            soma_linha+=matriz[icont][jcont];
        }
        
        printf("somatorio das linhas:%i\n",soma_linha);//soma das linhas
        
    }
   for(numero=0;numero<3;numero++)//etapa calculo das colunas da matriz
   {
       soma_coluna=0;
       for(icont=0;icont<2;icont++)
       {
           for(jcont=0;jcont<3;jcont++)
         {
             if(numero==jcont)
             {
                 soma_coluna+=matriz[icont][jcont];
             }
         }
       }
       printf("soma de counas:%i\n",soma_coluna);
   }
    printf("a soma dos elememtos da matriz:%i\n",soma);//soma dos elementos da matriz
    return 0;
}

