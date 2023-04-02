/******************************************************************************
o codigo abaixo simula o vaor final de acordo com estado origem mercadoria,
ele aplica impostos diferentes caso opcao erreada seja digitada mensagem erro

*******************************************************************************/
#include <stdio.h>

int main()
{
    int estado;
    float valor;
    float valor_final;
    puts("============CALCULE VALOR DO SEU PRODUTO=============================");
    puts("informe o valor da mercadoria");
    scanf("%f",&valor);
    puts("digite 1 para estado de mg");
    puts("digite 2 para estado de sp");
    puts("digite 3 para estado de rj");
    puts("digite 4 para estado de ms");
    puts("informe opcao do estado desejado da mercadoria");
    scanf("%i",&estado);
    puts("processando.........................................................");
    switch(estado){
        case 1://minas gerais
        valor_final=valor+(valor*0.07);
        printf("o produto custara:%.3f R$\n",valor_final);
        break;
        case 2://sao paulo
        valor_final=valor+(valor*0.12);
        printf("o produto custara:%.3f R$\n ",valor_final);
        break;
        case 3://rio de janeiro
        valor_final=valor+(valor*0.15);
        printf("o produto custara:%.3f R$\n",valor_final);
        break;
        case 4://mato grosso 
        valor_final=valor+(valor*0.08);
        printf("o produto custara:%.3f R$\n",valor_final);
        break;
        default:
        printf("opcao invalida tente novamente");
        
    }

    return 0;
}
