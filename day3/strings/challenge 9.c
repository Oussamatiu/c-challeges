#include <stdio.h>


void main (){
    char liste[50] ;
    int somme = 0 , i=0 , last = 0 ;
    printf("donner un liste de caracteres : ");
    fgets(liste ,sizeof(liste), stdin);
    
   
    while(liste[i] != '\0'){
       somme +=1;
       i++;
    }
    for ( i = 0; i < somme-1 ; i++)
    { 
     if(liste[i] == ' ')
     {
        last+=1;
        for (int j = i; j < somme -1; j++)
        {
          liste[j] = liste[j+1];  
        }

     }
    }
    liste[somme-last]='\0';
    printf("%s",liste);
 
}