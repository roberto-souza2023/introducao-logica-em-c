/******************************************************************************
 
Escreva um programa que leia o índice pluviométrico de cada dia do mês de junho e
informe o dia que mais choveu, o dia que menos choveu e as médias pluviométricas de
cada uma das duas quinzenas.

*******************************************************************************/
#include <stdio.h>
# define tam 30
int main()
{
    int volume_chuva[tam];
    int icont;
    int maior;
    int menor;
    int posicao;
    int posicao2;
    float soma=0;
    float soma2=0;
    float media1,media2;
    printf("informe o volume de chuva de cada dia do mes de junho\n");
    for(icont=0;icont<tam;icont++)
    {
        scanf("%i",&volume_chuva[icont]);
    }
    for(icont=0;icont<tam;icont++)
    {
        if(icont==0)
        {
            maior=volume_chuva[icont];
            posicao=icont;//maior volume de chuva
            menor=volume_chuva[icont];
            posicao2=icont;//menor volume de chuva
        }
        if(volume_chuva[icont]>maior)//maior volume
        {
            maior=volume_chuva[icont];
            posicao=icont;
        }
        if(volume_chuva[icont]<menor)//menor volume
        {
            menor=volume_chuva[icont];
            posicao2=icont;
        }
        
    }
    for(icont=0;icont<tam;icont++)
    {
        if((icont>=0)&&(icont<tam/2))
        {
            soma=soma+volume_chuva[icont];
        }
        else
        {
            soma2=soma2+volume_chuva[icont];
        }
    }
    media1=soma/(tam/2);
    media2=soma2/(tam/2);
    //acrescimo do valor 1 considere vetor inicia posicao 0
   printf("o maior volume de chuva foi %i no dia %i\n",maior,posicao+1);
   printf("o menor volume de chuva foi %i no dia %i\n",menor,posicao2+1);
   printf("a media de volume de chuva 1 quizena %.5f\n",media1);
    printf("a media de volume de chuva 2 quizena %.5f\n",media2);
   
    return 0;
}

