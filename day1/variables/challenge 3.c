#include <stdio.h>
int main(void){
  float km;
  float yards;

  printf("entre km : ");
  scanf("%f", &km);

  yards = km * 1093.61;

  printf("yards is %.2f" ,yards);
   
  return 0;
}