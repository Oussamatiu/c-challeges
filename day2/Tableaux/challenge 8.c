#include <stdio.h>

void main (){
   int num ;
   
   
   printf("donner le nombre d'éléments d'un tableau : ");
   scanf("%d", &num);
   int tableau[num];
   for (int i = 0 ; i < num ; i++){
    printf("donner un nomber : ");
    scanf("%d" ,&tableau[i]);
   }
   int tableau2[num];
   for(int i = 0 ; i < num ; i++){
    tableau2[i] = tableau[i]; 
   }
   for( int i = 0; i < num ; i++ ){
    printf("%d ", tableau[i]);
   }
   printf("\n");
   for( int i = 0; i < num ; i++ ){
    printf("%d ", tableau2[i]);
   }
}