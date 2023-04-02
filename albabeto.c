/******************************************************************************
. Escreva um programa que leia um caracter e diga se ele é uma vogal, consoante, número
ou um símbolo (qualquer outro caracter, que não uma letra ou número).
*******************************************************************************/
#include <stdio.h>

int main()
{
   char letra;
   printf("digite um caracter\n");
   scanf("%c",&letra);
   if((letra>=48)&&(letra<=57))
   {
       printf("o caracter e um numero\n");
   }
   else if(letra==97||letra==101||letra==105||letra==111||letra==117)
   {
       printf("este caracter e uma vogal\n");
   }
   else if((letra>=97&&letra<=122)&&(letra!=97||letra!=101||letra!=105||letra!=111||letra!=117))
   {
       printf("este caracter e uma consoante\n");
   }
   
   else
   {
    printf("este caracter especial\n");   
   }
    return 0;
}
