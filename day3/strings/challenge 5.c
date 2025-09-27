#include <stdio.h>


void main (){
    char liste[50] ;
    int somme = 0 , i=0 , take ;
    printf("donner un liste de caracter 1 : ");
    scanf("%s", liste);
   
    while(liste[i] != '\0'){
       somme +=1;
       i++;
    }
    for ( i = 0; i < somme / 2; i++)
    {
        take = liste[i];
        liste[i] = liste[somme - 1 - i];
        liste[somme - 1 - i]=take;
    }
    printf("%s", liste);
 
}