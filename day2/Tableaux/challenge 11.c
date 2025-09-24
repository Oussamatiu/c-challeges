#include <stdio.h>

void main (){
   int num , new ,old;
   
   
   printf("donner le nombre d'éléments d'un tableau : ");
   scanf("%d", &num);
   int tableau[num];
   for (int i = 0 ; i < num ; i++){
    printf("donner un nomber : ");
    scanf("%d" ,&tableau[i]);
   }
   printf("donner le nombre qui veux change : ");
   scanf("%d", &old);
   printf("donner la nouvelle valeur : ");
   scanf("%d", &new);

   for (int i = 0 ; i < num ; i++){
    if(tableau[i] == old){
        tableau[i] = new ;
        break;
    }
   }

   for (int i = 0 ; i < num ; i++){
   printf("%d ", tableau[i]);
   }
}