/******************************************************************************
 
Escreva um programa que leia um vetor de 10 posições de inteiros e um inteiro. O
programa deve informar a primeira posição onde este inteiro ocorre no vetor ou -1 caso o
valor não ocorra no vetor (Busca Sequencial).

*******************************************************************************/
#include <stdio.h>
# define tam 10
int main()
{
    int vetor[tam];
    int icont;
    int numero;
    int busca=0;
    int posicao;
    printf("informe 10 valores para o vetor\n");
    for(icont=0;icont<tam;icont++)
    {
        scanf("%i",&vetor[icont]);
    }
    printf("informe um elemento numerico a ser pesquisado\n");
    scanf("%i",&numero);
    for(icont=0;(icont<tam)&&(busca==0);icont++)
    {
        if(numero==vetor[icont])
        {
            busca=-1;
            posicao=icont;
        }
    }
    if(busca==-1)
    {
        printf("o numero %i foi encontrado posicao %i\n",numero,posicao);
    }
    else
    {
        printf("valor nao localizado\n");
    }
    return 0;
}

