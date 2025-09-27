#include <stdio.h>


void main (){
    char liste[50] , liste2[30];
    int somme = 0 , i=0 ,somme2 = 0 , j ,non =0;
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
    for (int i = 0 ,  j = 0 ; i < somme  && j < somme2; i++ , j++)
    {
        if(liste[i] != liste2[j]){
            printf("non");
            non = 1;
            break;
        }  
    }
    if (!non)
    {
        printf("egal");
    }
}