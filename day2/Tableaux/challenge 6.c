#include <stdio.h>

void main (){
   int num , max , fac;
   printf("donner le nombre d'éléments d'un tableau : ");
   scanf("%d", &num);
   
   int tableau[num];
   for (int i = 0 ; i < num ; i++){
    printf("donner un nomber : ");
    scanf("%d" ,&tableau[i]);
   }
  printf("donner le facteur : ");
  scanf("%d" ,&fac);
  for (int i = 0 ; i < num ; i++){
    printf("%d * %d = %d\n", tableau[i] , fac,tableau[i]  * fac);
   }
}