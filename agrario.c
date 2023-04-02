/******************************************************************************
Uma Cia de pulverização utiliza avião para pulverizar lavouras. Os custos de
pulverização dependem do tipo de praga e da área a ser contratada conforme a tabela:
Tipo 1 – ervas daninhas R$ 50,00 por acre;
Tipo 2 – gafanhotos R$ 100,00 por acre;
Tipo 3 – broca R$ 150,00 por acre;
Tipo 4 – todos acima R$ 250,00 por acre.
Se a área a ser pulverizada for superior a 1000 acres, o fazendeiro tem um desconto de
5%. Em adição, qualquer fazendeiro cujo custo for maior do que R$ 750,00 tem um
desconto de 10% sobre o valor que ultrapassar os R$ 750,00. Caso ambos os descontos se
aplicam o da área é calculado antes. Fazer um algoritmo que leia: o tipo de pulverização
(1 a 4) e área a ser pulverizada; e imprima o valor a ser pago.


*******************************************************************************/
#include <stdio.h>

int main()
{
    float acre,custo;
    int tipo_praga,sentinela=0;
    printf("qual o valor da area que sera pulverizada\n");
    scanf("%f",&acre);
    printf("qual o tipo de praga a ser combatida\n");
    printf("1-ervas da ninha\n");
    printf("2-gafanhotos\n");
    printf("3-brocas\n");
    printf("4-todas opcoes acima\n");
    scanf("%i",&tipo_praga);
    switch(tipo_praga)
    {
        case 1:
        custo=acre*50;
        break;
        case 2:
        custo=acre*100;
        break;
        case 3:
        custo=acre*150;
        break;
        case 4:
        custo=acre*250;
        break;
        default://caso digite opcao fora do do menu
        sentinela=-1;//esta  variavel recebe este valor se a situacao acontecer
        printf("opcao invalida!!!!!!!\n");
        break;
    }
    if(acre>1000)
    {
        custo=custo*0.95;
    }
    if(custo>750)
    {
        custo=custo*0.90;
    }
    if(sentinela==0)
    {
    printf("o custo final para combater a praga sera:%f\n",custo);
    }
    return 0;
}
