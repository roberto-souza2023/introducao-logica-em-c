/******************************************************************************
o codigo abaixo deve solicita numero int e exibir soma dos divisores
exeto o propio numero


*******************************************************************************/
#include <stdio.h>

int main(){

    int numero;
    int soma=0;
    int icont;
    int divisores;
    puts("informe um numero inteiro:");
    scanf("%i",&numero);
    for(icont=1;icont<numero;icont++){
        if(numero%icont==0){
            divisores=icont;
            soma=soma+divisores;
        }
    }
    puts("processando.....................................................");
    printf("a quantidade de divisores de %i:\n[%i]",numero,soma);
    return 0;
}
