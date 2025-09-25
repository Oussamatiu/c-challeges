#include <stdio.h>

void main (){
   int num , com;
   
   
   printf("donner le nombre d'éléments d'un tableau : ");
   scanf("%d", &num);
   int tableau[num];
   for (int i = 0 ; i < num ; i++){
    printf("donner un nomber %d: ", i+1);
    scanf("%d" ,&tableau[i]);
   }
   for(int i = 0; i < num / 2 ; i++){
    com = tableau[i];
    tableau[i] = tableau[num - 1 - i];
    tableau[num - 1 - i] = com; 
   }
   for (int i = 0; i < num; i++)
   {
    printf("%d ", tableau[i]);
   }
}