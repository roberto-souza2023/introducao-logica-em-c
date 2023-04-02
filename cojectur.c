/******************************************************************************

A famosa conjectura de Goldbach diz que todo inteiro par maior que 2 é soma de dois
números primos. Testes foram feitos, mas ainda não se achou um contra-exemplo.
Escreva um programa mostrando que a afirmação é verdadeira para todo número par
entre 500 e 1000. O programa deve imprimir o número par e os dois primos que somados
dão o número pa

*******************************************************************************/
#include <stdio.h>
#define inicio 500
#define fim 1000
int main()
{
    int termo,termo2;
    int numero,divisores,divisores2;
    int icont,jcont;
    for(numero=inicio;numero<=fim;numero++)
    {
        if(numero%2==0)//pares
        {
            for(termo=1;termo<=fim;termo++)
            {
                for(termo2=1;termo2<=fim;termo2++)
                { divisores=0;
                   for(icont=1;icont<=termo;icont++)//avalia se termo e primo
                   {
                       if(termo%icont==0)
                       {
                           divisores++;
                       } 
                   }
                   divisores2=0;
                   for(jcont=1;jcont<=termo2;jcont++)//avalia se termo e primo
                   {
                       if(termo2%jcont==0)
                       {
                           divisores2++;
                       }
                   }
                   if((divisores==2)&&(divisores2==2))
                   {
                       if(termo+termo2==numero)
                       {
                           printf("%i+%i=%i\n",termo,termo2,numero);
                       }
                   }
                }
            }
        }
    }
    

    return 0;
}
