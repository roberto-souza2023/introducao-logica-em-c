/******************************************************************************
Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma
*******************************************************************************/
#include <stdio.h>
# define pi 3.14
int main()
{
    float raio,area,perimetro;
    printf("informe o raio da circufeencia\n");
    scanf("%f",&raio);
    area=pi*raio*raio;
    perimetro=2*pi*raio;
   printf("area da circuferencia corresponde a %.6f centimetros quadrados\n",area);
   printf("o perimetro da circuferencia corresponde a %.6f centimetros\n",perimetro);
    return 0;
}
