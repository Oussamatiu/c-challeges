#include <stdio.h>
#include <string.h>
#define MAX 100
void menu(){

}
void main (){
  char titres[MAX][50] , auteur[MAX][50] , value[30];
  int new ,somme = 0; 
  float prixs[MAX];
  int quantite[MAX], choix ,count = 0;

  printf("Système de Gestion de Stock\n");
  do {
  printf("===menu===\n1.ajouter un livre\n2.afficher tous les livre\n3.Mettre à Jour la Quantité d'un Livre\n4.Supprimer un Livre du Stock\n5.Afficher le Nombre Total de Livres en Stock\n6.quitter\nvotre choix : ");
  scanf("%d", &choix); 
  switch (choix)
  {
  case 1:
    getchar();
    printf("donner titre: ");
    fgets(titres[count],sizeof(titres), stdin);
    printf("\ndonner auteur: ");
    fgets(auteur[count],sizeof(auteur), stdin);
    printf("\ndonner prix: ");
    scanf("%f", &prixs[count]);
    printf("\ndonner quantite: ");
    scanf("%d", &quantite[count]);
    printf("\n");
    count++;
    break;
  case 2:
  if(count == 0){
    printf("pas de livre\n");
  }else{
    for (int i = 0; i < count; i++)
    {      
            printf("id de liver : %d", count);
            printf("\ntiter de liver : %s", titres[i]);
            printf("\nauteur de liver : %s", auteur[i]);
            printf("\nprix de liver : %.2f", prixs[i]);
            printf("\nquantite de liver : %d\n", quantite[i]);
    } 
  } 
    break;
  case 3:
     getchar();
     printf("donner le titre du livre : ");
     fgets(value , sizeof(value), stdin);
     printf("\ndonner la nouvelle quantité : ");
     scanf("%d", &new);
     for (int i = 0; i < count; i++)
     {
        if(strcmp(titres[i], value) == 0){
            quantite[i] = new;
        }else{
            printf("not found\n");
        }
     }
   break;
  case 4:
     getchar();
     printf("donner le titre du livre qui veux supprimer : ");
     fgets(value, sizeof(value),stdin);
     
     for (int i = 0; i < count; i++)
     {
        if(strcmp(titres[i], value) == 0){
            for (int j = i; j < count - 1; j++)
            {
                    strcpy(titres[j], titres[j+1]);
                    strcpy(auteur[j], auteur[j + 1]);
                    prixs[j]=prixs[j+1];
                    quantite[j]= quantite[j+1];  
            }
            count--;
        }else{
            printf("not found\n");
        }
     }
     break;
  case 5:
  if(count == 0){
    printf("pas de liver\n");
  }else {
     for (int i = 0; i < count; i++)
    {
        somme+=quantite[i];
        printf("quantites total est : %d\n", somme);
    }
  }
    
   break;
  case 6:
    printf("vous quitter le systeme");
    break;
  default:
    printf("invalide");
    break;
  }
 } while (choix != 6);
}