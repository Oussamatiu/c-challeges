#include <stdio.h>

void main (){
   int num , max;
   printf("donner le nombre d'éléments d'un tableau : ");
   scanf("%d", &num);
   int tableau[num];
   for (int i = 0 ; i < num ; i++){
    printf("donner un nomber : ");
    scanf("%d" ,&tableau[i]);
   }
  for(int i = 0; i < num ; i++){
    max = tableau[0];
    if(max < tableau[i]){
        max = tableau[i];
    }
  } 
  printf("maximum est : %d", max);
}