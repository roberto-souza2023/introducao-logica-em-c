/******************************************************************************
. . Escreva um algoritmo que leia 2 valores (x e y), que devem representar as coordenadas
de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o
ponto, ou se está sobre um dos eixos cartesianos ou na origem (x=y=0).

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,y;
    printf("nforme a cordenada x\n");
    scanf("%i",&x);
    printf("nforme a cordenada y\n");
    scanf("%i",&y);
    if((x==0)&&(y==0))
    {
        printf("o ponto esta na origem das retas\n");
    }
    if((x>0)&&(y>0))
    {
        printf("o ponto esta no 1 quadrante\n");
    }
    if((x<0)&&(y>0))
    {
        printf("o ponto esta no 2 quadrante\n");
    }
    if((x<0)&&(y<0))
    {
        printf("o ponto esta no 3 quadrante\n");
    }
    if((x>0)&&(y<0))
    {
        printf("o ponto esta no 4 quadrante\n");
    }
    if(((x>0)||(x<0))&&(y==0))
    {
        printf("o ponto esta no eixo das ordenadas\n");
    }
    if(((y>0)||(y<0))&&(x==0))
    {
        printf("o ponto esta no eixo das abscissas\n");
    }
    return 0;
}

