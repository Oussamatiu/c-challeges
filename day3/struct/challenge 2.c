#include <stdio.h>

int main(){
    struct etudiants
    {
       char nom[30] ;
       char pernom[30];
       float note[3];
    };

    struct etudiants etu = {"ali", "moh",{10,15,6}};



    printf("le nom est %s", etu.nom) ;
    printf("le pernom est %s", etu.pernom) ;
    printf("les notes est :") ;
    for (int i = 0 ; i < 3 ; i++){
        printf(" %.2f",etu.note[i]);
    }

    
}