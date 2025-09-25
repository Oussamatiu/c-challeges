#include <stdio.h>

void main (){
   int num , somme = 0;
   float moyenne;
   
   
   printf("donner le nombre d'éléments d'un tableau : ");
   scanf("%d", &num);
   int tableau[num];
   for (int i = 0 ; i < num ; i++){
    printf("donner un nomber %d : ",i + 1);
    scanf("%d" ,&tableau[i]);
   }
   for (int i = 0 ; i < num ; i++){
    somme += tableau[i];
   }
   moyenne = (float)somme / num;
  

   printf("la moyenne : %.2f" , moyenne);
}