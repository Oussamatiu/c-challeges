#include <stdio.h>
int main(void){

   char nom[30];
   char prenom[30];
   int age ;
   char sexe;
   
   printf("entre nome et prenom et age et sexe et adresse : ");
   scanf("%s %s %d %c", &nom , &prenom , &age , &sexe );

   printf("nom est %s et prenom %s et age %d et sexe %c" , nom ,prenom , age ,sexe);

  return 0;
}