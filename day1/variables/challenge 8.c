#include <stdio.h>
#include <math.h>
int main(void){
  float num1 , num2 , num3 , moyenne;
   printf("entre num1 : ");
   scanf("%f", &num1);
   printf("entre num2 : ");
   scanf("%f", &num2);
   printf("entre num3 : ");
   scanf("%f", &num3);

   moyenne = pow((num1 * num2 * num3),1.0/3.0);
   printf("Moyenne géométrique est : %.2f", moyenne);
   
  return 0;
}