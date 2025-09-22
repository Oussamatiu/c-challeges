#include <stdio.h>
#include <math.h>
int main(void){
  float r;
  const float PI = 3.14;
  printf("entre r : ");
  scanf("%f", &r);
  float volume = (4.0/3.0) * PI * pow(r ,3);
  printf("volume is : %.2f", volume);
  return 0;
}