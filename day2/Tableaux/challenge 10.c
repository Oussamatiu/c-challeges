#include <stdio.h>

void main (){
   int num , find ,check = 0 ;
   
   
   
   printf("donner le nombre d'éléments d'un tableau : ");
   scanf("%d", &num);
   int tableau[num];
   for (int i = 0 ; i < num ; i++){
    printf("donner un nomber : ");
    scanf("%d" ,&tableau[i]);
   }
   printf("donner element : ");
   scanf("%d" ,&find);

   for(int i = 0 ; i < num ; i++){
    if(find == tableau[i] ){
        printf("présent");
        check == 1;
        break;
    }  
  } 

if(!check) {
    printf("non");
}
}