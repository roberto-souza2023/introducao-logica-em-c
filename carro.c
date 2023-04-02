/******************************************************************************
O preço de um automóvel é calculado pela soma
do preço de fábrica com o preço dos impostos
(45% do preço de fábrica) e a percentagem do
revendedor (28% do preço de fábrica). Faça um
algoritmo que leia o nome do automóvel e o preço
de fábrica e mostre o nome do automóvel e o
preço final.


*******************************************************************************/
#include <stdio.h>
int main()
{
    char tipo_carro[30];
    float valor_fabrica;
    float valor_final;
    printf("qual o modelo do automovel\n");
    scanf("%s",tipo_carro);
    printf(" qual valor do automovel na fabrica\n");
    scanf("%f",&valor_fabrica);
    valor_final=valor_fabrica+(valor_fabrica*0.45)+(valor_fabrica*0.28);
    //impostos+comissao revendedor+valor carro.
    printf("o modelo %s custara %.3f reais\n",tipo_carro,valor_final);
    
    

    return 0;
}
