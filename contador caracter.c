/******************************************************************************

o codigo conta qtd de caracteres mesmo existindo espacos na string
*******************************************************************************/
#include <stdio.h>

int main()
{
    char texto[30];
    int icont;
    int espaco=0;
    int soma=0;
    puts("informe uma string");
    fgets(texto,30,stdin);
    for(icont=0;icont<30;icont++)
    {
        if(texto[icont]==32)//valor na tabela ask2 para yecla espaco
        {
            espaco++;
        }
        if(texto[icont]=='\0')
        {
            soma=soma-1;
            break;
        }
        soma++;
        
    }
printf("a string possui %i caracteres\n",soma-espaco);
    return 0;
}
