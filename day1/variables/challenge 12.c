#include <stdio.h>
int main(void){
   int num , n1 ,n2 ,n3 ,n4;
   printf("entre nombre de 4 chiffres : ");
   scanf("%d", &num);
   n1 = num %10;
   n2 = (num / 10) % 10;
   n3 = (num / 100) % 10;
   n4 = num /1000;
   printf("%d%d%d%d", n1, n2, n3 ,n4);

   
  return 0;
}