#include <stdio.h>
int main(void){
float num1, num2, num3;
  
  printf("entre numbre 1 : ");
  scanf("%f", &num1);
  printf("entre numbre 2 : ");
  scanf("%f", &num2);
  printf("entre numbre 3 : ");
  scanf("%f", &num3);

  printf("moyenne est : %.2f",(num1*2 + num2*3 + num3*5) / (5 + 2 + 3));
   
  return 0;
}