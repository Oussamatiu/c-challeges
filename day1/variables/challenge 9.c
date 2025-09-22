#include <stdio.h>
#include <math.h>
int main(void){
  float x1, y1 , z1 , x2, y2, z2, distance;
  printf("entre x1 et x2 et z1 et z2 et y1 et y2  : ");
  scanf("%f %f %f %f %f %f", &x1 ,&x2 ,&z1 ,&z2 ,&y1 ,&y2);
  

  distance = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2) + pow((z2 - z1) , 2));
  
  printf("Distance is %.2f" ,distance);
   
  return 0;
}