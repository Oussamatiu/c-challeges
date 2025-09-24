#include <stdio.h>

void main (){
   int num , com;
   printf("donner le nombre d'éléments d'un tableau : ");
   scanf("%d", &num);
   int tableau[num];
   for (int i = 0 ; i < num ; i++){
    printf("donner un nomber : ");
    scanf("%d" ,&tableau[i]);
   }

  for(int i = 0; i < num ; i++){
    for(int j = 0 ; j < num; j++){
      if(tableau[j] > tableau[j + 1]){
         com = tableau[j];
         tableau[j] = tableau[j + 1];
         tableau[j + 1] = com;
      }
    }
  } 

  for (int i = 0; i < num; i++)
  {
    printf("%d " ,tableau[i]);
  }
  
}
  