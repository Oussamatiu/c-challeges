#include <stdio.h>


void main (){
    char liste[50] ;
    int somme = 0 , i=0  ;
    printf("donner un liste de caracteres : ");
    scanf("%s", liste);
    
   
    while(liste[i] != '\0'){
       somme +=1;
       i++;
    }
    for ( i = 0; i < somme ; i++)
    { 
     if((int)liste[i] < 97 && (int)liste[i] >= 65 )
     {
      int miniscule = (int)liste[i] + 32;
      liste[i] = (char)miniscule;
     }
    }
    printf("%s",liste);
 
}