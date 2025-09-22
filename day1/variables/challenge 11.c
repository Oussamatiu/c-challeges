#include <stdio.h>
int main(void){
  float longueur , largeur , surface;
  printf("entre longueur et largeur : ");
  scanf("%f %f", &longueur ,&largeur);
  
  surface = longueur * largeur;
  printf("surface est : %.2f", surface);
   
  return 0;
}