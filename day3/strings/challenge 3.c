#include <stdio.h>


void main (){
    char liste[50] , liste2[30];
    int somme = 0 , i=0 ,somme2 = 0 , j;
    printf("donner un liste de caracter 1 : ");
    scanf("%s", liste);
    printf("donner un liste de caracter 2 : ");
    scanf("%s", liste2);
    while(liste[i] != '\0'){
       somme +=1;
       i++;
    }
    i = 0;
    while(liste2[i] != '\0'){
       somme2 +=1;
       i++;
    }
    for (int i = somme ,  j = 0 ; i < somme + somme2 && j < somme2; i++ , j++)
    { 
        liste[i] = liste2[j];
    }
    liste[somme2 + somme] = '\0';
    printf("resultat : %s", liste);
}