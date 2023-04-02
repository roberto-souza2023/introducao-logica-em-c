/******************************************************************************
Converter um inteiro informado menor que 32 para sua representação em binário

*******************************************************************************/
#include <stdio.h>

int main()
{
   int r1,r2,r3,r4,r5,r6;
   int decimal,binario,q1,q2,q3,q4,q5,q6;
    printf("informe um numero decimal abaixo 32\n");
    scanf("%i",&decimal);
    //decimal vaalor fornecido pelo usuario,binario no final aperece na tela
    //os" r "corresponde modulos os" q "os quociente para proxima etapa exeto r6
    r1=decimal%2;
    q1=decimal/2;
    r2=q1%2;
    q2=q1/2;
    r3=q2%2;
    q3=q2/2;
    r4=q3%2;
    q4=q3/2;
    r5=q4%2;
    r6=q4/2;
    binario=(r6*100000)+(r5*10000)+(r4*1000)+(r3*100)+(r2*10)+r1;
    printf("%i\n",binario);
    return 0;
}
