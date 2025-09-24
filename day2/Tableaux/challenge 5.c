#include <stdio.h>

void main (){
   int num , min;
   printf("donner le nombre d'éléments d'un tableau : ");
   scanf("%d", &num);
   int tableau[num];
   for (int i = 0 ; i < num ; i++){
    printf("donner un nomber : ");
    scanf("%d" ,&tableau[i]);
   }
  for(int i = 0; i < num ; i++){
    min = tableau[0];
    if(min > tableau[i]){
        min = tableau[i];
    }
  } 
  printf("maximum est : %d", min);
}