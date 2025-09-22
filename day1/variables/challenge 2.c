#include <stdio.h>
int main(void){

    int celsius;
    float kalvin;
      
    printf("entre celsius :");
    scanf("%d", &celsius);

    kalvin = celsius + 273.15;
    printf("kalvin is %.2f", kalvin);

  return 0;
}