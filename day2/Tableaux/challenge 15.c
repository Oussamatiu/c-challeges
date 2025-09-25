#include <stdio.h>

void main (){
   int num1, num2 ;
   
   
   printf("donner le nombre d'éléments d'un tableau 1 : ");
   scanf("%d", &num1);
   int tableau1[num1];

   for (int i = 0 ; i < num1 ; i++){
    printf("donner un nomber %d: ", i+1);
    scanf("%d" ,&tableau1[i]);
   }

   printf("donner le nombre d'éléments d'un tableau 2 : ");
   scanf("%d", &num2);
   int tableau2[num2];

   for (int i = 0 ; i < num2 ; i++){
    printf("donner un nomber %d: ", i+1);
    scanf("%d" ,&tableau2[i]);
   }

   int tableau3[num1 + num2];
   for (int i = 0 ; i < num1 ; i++){
    tableau3[i]=tableau1[i];
   }
   for (int i = num1 , j = 0 ; j < num2; i++ , j++){
    tableau3[i] = tableau2[j];
   }
   
   for (int i = 0; i < num1 + num2 ; i++ ){
     printf("%d ", tableau3[i]);
   }
   
   
}