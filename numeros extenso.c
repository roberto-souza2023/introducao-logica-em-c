/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    int digito_final;
    int digito_inicial;
    printf("informe um numero entre 0 e 100\n");
    scanf("%i",&numero);
    if(numero<=100)
    {
        switch(numero){
            case 10:
            printf("dez");
            break;
            case 11:
            printf("onze");
            break;
            case 12:
            printf("doze");
            break;
            case 13:
            printf("treze");
            break;
            case 14:
            printf("quartoze");
            break;
            case 15:
            printf("quinze");
            break;
            case 16:
            printf("dezesseis");
            break;
            case 17:
            printf("dezesete");
            break;
            case 18:
            printf("dezoito");
            break;
            case 19:
            printf("dezenove");
            break;
            case 100:
            printf("cem");
            
        }
        if((numero>19)&&(numero<100)){
            digito_final=numero%10;
            digito_inicial=numero/10;
        }
        switch(digito_inicial){
            case 2:
            printf("vinte e ");
            break;
            case 3:
            printf("trinta e");
            break;
            case 4:
            printf("quarenta e");
            break;
            case 5:
            printf("cinquenta e");
            break;
            case 6:
            printf("sessenta e");
            break;
            case 7:
            printf("setenta e");
            break;
            case 8:
            printf("oitenta e");
            break;
            case 9:
            printf("noventa e");
            break;
        }
        if((numero==1)||(digito_final==1))
        {
            printf(" um");
        }
        if((numero==2)||(digito_final==2))
        {
            printf(" dois");
        }
        if((numero==3)||(digito_final==3))
        {
            printf(" tres");
        }
        if((numero==4)||(digito_final==4))
        {
            printf(" quatro");
        }
        if((numero==5)||(digito_final==5))
        {
            printf(" cinco");
        }
        if((numero==6)||(digito_final==6))
        {
            printf(" seis");
        }
        if((numero==7)||(digito_final==7))
        {
            printf(" sete");
        }
        if((numero==8)||(digito_final==8))
        {
            printf(" oito");
        }
        if((numero==9)||(digito_final==9))
        {
            printf(" nove");
        }
    }
    else{
        printf("numero invalido \n");
    }
    return 0;
}
