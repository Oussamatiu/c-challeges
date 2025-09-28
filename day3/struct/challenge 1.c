#include <stdio.h>

int main(){
    struct personne
    {
       char nom[30] ;
       char pernom[30];
       int age;
    };
    struct personne num1;
    printf("donner le nom : ");
    scanf("%s", num1.nom);
    printf("donner le prenom : ");
    scanf("%s", num1.pernom);
    printf("donner age : ");
    scanf("%d", &num1.age);

    printf("le nom est %s et prenom est %s et age est %d", num1.nom , num1.pernom , num1.age);
    
}