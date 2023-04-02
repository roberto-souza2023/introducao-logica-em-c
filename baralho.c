/******************************************************************************
- É popular, entre jogadores, uma forma de embaralhar cartas conhecida pelo nome de corte de Faro.
Este corte é realizado através do seguinte método: O deck de cartas é separado em duas metades; em seguida,
as cartas das duas metades são intercaladas, de forma que a primeira carta da metade inferior seja seguida pela
primeira carta da metade superior, então a segunda carta da metade inferior e assim por diante.
Por exemplo, considere um baralho de 6 cartas, que são numeradas de 1 a 8, e começam em ordem crescente.
Aplicando repetidamente o corte de faro, temos:
Configuração inicial: 1,2,3,4,5,6,7,8
Após 1º corte de Faro: 5,1,6,2,7,3,8,4
Após 2º corte de Faro: 7,5,3,1,8,6,4,2
Após 3º corte de Faro: 8,7,6,5,4,3,2,1
Como o processo que gera o corte de Faro não é simples, um jogador que quer aplicá-lo a baralhos de tamanho
arbitrário, lhe contratou para que desenvolva um programa em C, que consiga dizer qual a posição em que uma
carta específica do baralho se encontrará após vários cortes.
O programa deve ler a configuração inicial do baralho de N posições (considere para o seu código que N=12,
mas o algoritmo deve ser genérico, de forma a ser facilmente recompilado para outros tamanhos de baralho),
um número de cortes de Faro e o valor de uma carta a ser procurada. O algoritmo deve calcular e imprimir a
posição da carta no baralho após o número de cortes de Faro indicado.



*******************************************************************************/
#include <stdio.h>
#define tam 8
int main()
{
    int corte;
    int icont;
    int jcont;
    int kcont;
    int deck[tam]={1,2,3,4,5,6,7,8};
    int part1[tam/2];
    int part2[tam/2];
    int sentinela=0;
    int posicao;
    int numero;
    printf("informe quantos cortes serao feitos no baralho\n");
    scanf("%i",&corte);
    for(icont=1;icont<=corte;icont++)//define quntidade ordenamentos 
    {
        kcont=-1;
       for(jcont=0;jcont<tam;jcont++)//separa o vetor oriinal em 2
       {
           if((jcont>=0)&&(jcont<tam/2))
           {
               part1[jcont]=deck[jcont];
           }
           else
           {
               kcont++;
               part2[kcont]=deck[jcont];//a 2 metade recebe parte vetor original
           }
       }
       kcont=-1;
       for(jcont=0;jcont<tam;jcont++)
       {
           kcont++;
           if(jcont%2==0)//posicao par
           {
             deck[jcont]=part2[kcont]; 
             kcont--;
           }
           else//posicao impar
           {
               deck[jcont]=part1[kcont];
           }
       }
       
    }
    printf("informe numero da carta\n");
    scanf("%i",&numero);
    for(icont=0;(icont<tam)||(sentinela==0);icont++)
    {
        if(deck[icont]==numero)
        {
            sentinela=-1;//quando essa variavel receber o vlor -1 eleacha posicao
            posicao=icont;
        }
    }
printf("a carta esta na posicao %i\n",posicao+1);
    return 0;
}
