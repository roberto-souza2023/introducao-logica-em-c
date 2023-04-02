#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k;
    int icont;
    int jcont;
    int abundante=0;
    int soma;
    printf("informe quantos valores tera a sua sequencia\n");
    scanf("%i",&k);
    for(icont=1;abundante<=k;icont++)
    {

        soma=0;
        for(jcont=1;jcont<=icont;jcont++)
        {

            if(icont%jcont==0)
            {
                soma=soma+jcont;
            }
        }
        if(soma>(2*icont))
        {
            abundante++;
            printf("%i\n",icont);
        }
    }
    return 0;
}
