#include <stdio.h>

void main(){
   int anner , choix ;
   printf("entre nomber des annee : ");
   scanf("%d" , &anner);
   printf("====menu====");
   printf("\n1.mois \n2.jours \n3.heures\n4.minutes \n5.secondes");
   scanf("%d" , &choix);
   switch (choix)
   {
   case 1:
    int mois = anner * 12;
    printf("mois de %d est : %d", anner , mois);
    break;
   case 2:
    int jours = anner * 365;
    printf("mois de %d est : %d", anner , jours);
    break;
   case 3:
    int heures = anner * 365 * 24;
    printf("mois de %d est : %d", anner , heures);
    break;
   case 4:
    int minutes = anner * 356 * 24 * 60;
    printf("mois de %d est : %d", anner , minutes);
    break;
   case 5:
    int secondes = anner * 356 * 24 * 60 *60 ;
    printf("mois de %d est : %d", anner , secondes);
    break;  
   default:
    break;
   }
   
    
}