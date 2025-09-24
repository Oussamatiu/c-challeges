#include <stdio.h>

void main (){
   int num , somme = 0;
   printf("donner le nombre d'éléments d'un tableau : ");
   scanf("%d", &num);
   int tableau[num];
   for (int i = 0 ; i < num ; i++){
    printf("donner un nomber : ");
    scanf("%d" ,&tableau[i]);
   }
   for (int i = 0 ; i < num ; i++){
     somme+=tableau[i];
   }
   printf("\n%d",somme);
}