/******************************************************************************

codigo converte uma string caixa baixa para caixa alta

*******************************************************************************/
#include <stdio.h>

int main()
{
    int icont;
    char palavra[9];
    char jcont;
    char kcont;
    puts("informe uma string");
    fgets(palavra,9,stdin);
    for(icont=0;icont<9;icont++)
    {
        kcont='@';
        for(jcont='a';jcont<='z';jcont++)
        {
            kcont++;
            if(palavra[icont]==jcont)
            {
                palavra[icont]=kcont;
                
            }
        }
    }
    
    for(icont=0;icont<9;icont++)
    {
        printf("%c",palavra[icont]);
    }
    return 0;
}
