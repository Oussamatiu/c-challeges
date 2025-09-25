#include <stdio.h>

void main (){
   int num ;
   
   
   printf("donner le nombre d'éléments d'un tableau : ");
   scanf("%d", &num);
   int tableau[num];
   for (int i = 0 ; i < num ; i++){
    printf("donner un nomber %d",i + 1);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
    scanf("%d ", &tableau[i]);
   for(int i = 0 ; i < num ; i++){
       if(tableau[i] % 2 == 0){
        printf("%d ", tableau[i]);
       }
   }
}
}