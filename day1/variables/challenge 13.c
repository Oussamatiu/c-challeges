#include <stdio.h>
void toBinaire(int num){
   if(num > 1){
     toBinaire(num / 2);
   }
   printf("%d",(num % 2));
}


int main(void){
  int num ;
  printf("entre nombre : ");
  scanf("%d",&num);
  
  printf("binaire est : ");
  toBinaire(num);
  printf("\nhexadecimale est %X :", num);
  

   
  return 0;
}