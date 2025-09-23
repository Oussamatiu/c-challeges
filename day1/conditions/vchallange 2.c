#include <stdio.h>

void main(){
   char caractire;
   printf("entre un caractère : ");
   scanf("%c" , &caractire);
   switch (caractire)
   {
   case 'a': case 'A':
   case 'e': case 'E':
   case 'u': case 'U':
   case 'o': case 'O':
   case 'y': case 'Y':
    printf("voyelle");
    break;
   
   default:
   printf("non");
    break;
   }
}