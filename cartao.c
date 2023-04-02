/******************************************************************************

O código de confirmação de uma transação bancária é calculada considerando os quatro dígitos finais do cartão e o horário da transaçãono formato HHMM. Para o cálculo, são gerados dois números considerando para o primeiro os maiores numerais de cada posição, e para o segundo o menor
númeral de cada posição. Em seguida, o menor número é subtraído do maior e seu invertido é gerado. Este último valor é o código de confirmação da transação.
Por exemplo, para o cartão 4392 e uma transação realizada às 12:15, o código de confirmação será
igual a 3813; calculado da seguinte forma: 4395 - 1212 = 3183, que quando invertido, gera o número
3813.
Escreva um programa  que leia um número de quatro dígitos do cartão e um outro representando o horário no formato HHMM e imprima o código de confirmação calculado.

*******************************************************************************/
#include <stdio.h>

int main()
{//c1,c2,c3,c4 e h1,h2,h3,h4=digitos do final cartao e horario da transação.
    int cartao,horario;
    int c1,c2,c3,c4,h1,h2,h3,h4;
    int maior1,maior2,maior3,maior4;//corresponde maiorrs valores
    int menor1,menor2,menor3,menor4,maior,menor;
    int diferencia,invertido,d1,d2,d3,d4;
    printf("informe o 4 digitos finais do cartao\n");
    scanf("%i",&cartao);
    printf("informe o horario da transaçaõ formato HH:MM 4 digitos\n");
    scanf("%i",&horario);
    //*************************************************************************
    c4=cartao%10;
    cartao=cartao/10;
    c3=cartao%10;
    cartao=cartao/10;
    c2=cartao%10;
    c1=cartao/10;
    //*************************************************************************
    h4=horario%10;
    horario=horario/10;
    h3=horario%10;
    horario=horario/10;
    h2=horario%10;
    h1=horario/10;
    //*************************************************************************
    if(c1>=h1)
    {
        maior1=c1;
        menor1=h1;
    }
    else
    {
        maior1=h1;
        menor1=c1;
    }
    if(c2>=h2)
    {
        maior2=c2;
        menor2=h2;
    }
    else
    {
        maior2=h2;
        menor2=c2;
    }
    
  if(c3>=h3)
    {
        maior3=c3;
        menor3=h3;
    }
    else
    {
        maior3=h3;
        menor3=c3;
    }
     if(c4>=h4)
    {
        maior4=c4;
        menor4=h4;
    }
    else
    {
        maior4=h4;
        menor4=c4;
    }//************************************************************************
    maior=(maior1*1000)+(maior2*100)+(maior3*10)+maior4;
    menor=(menor1*1000)+(menor2*100)+(menor3*10)+menor4;
    //**************************************************************************
    diferencia=maior-menor;
    d4=diferencia%10;
    diferencia=diferencia/10;
    d3=diferencia%10;
    diferencia=diferencia/10;
    d2=diferencia%10;
    d1=diferencia/10;
    invertido=(d4*1000)+(d3*100)+(d2*10)+d1;
    //**************************************************************************
    printf("o codigo de seguranca gerado foi %i\n",invertido);
    return 0;
}

