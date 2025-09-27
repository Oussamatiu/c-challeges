#include <stdio.h>


void main (){
    char liste[30];
    int somme=0 , i =0;
    printf("donner un liste de caracter : ");
    scanf("%s", liste);
    while(liste[i] != '\0'){
       somme +=1;
       i++;
    }
    printf("la longueur d'une chaîne de caractères est : %d", somme);

}