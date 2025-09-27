#include <stdio.h>


void main (){
    char liste[50] , caractere ;
    int somme = 0 , i=0 , com=0 ;
    printf("donner un liste de caracteres 1 : ");
    scanf("%s", liste);
    printf("donner un caractere : ");
    scanf(" %c", &caractere);
   
    while(liste[i] != '\0'){
       somme +=1;
       i++;
    }
    for ( i = 0; i < somme ; i++)
    {
        if (liste[i] == caractere)
        {
            com+=1;
        }
        
    }
    printf("trouve est : %d", com);
 
}