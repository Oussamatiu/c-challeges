#include <stdio.h>
#include <string.h>
#define MAX 100
struct Contact
{
    char nom[30];
    int numero [10];
    char email[200];
};

int main(){
    int choix , count=0 ;
    char name[30];
    struct Contact contacts[MAX];
    
    
    printf("===menu===\n1.ajoute un contact\n2.modifier un contact\n3.Supprimer un Contact\n4.Afficher Tous les Contacts\n5.Rechercher un Contact\n6.quitter\nvoutre choix : ");
    scanf("%d", &choix);
    do
    {
        printf("===menu===\n1.ajoute un contact\n2.modifier un contact\n3.Supprimer un Contact\n4.Afficher Tous les Contacts\n5.Rechercher un Contact\n6.quitter\nvoutre choix : ");
        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
            printf("donner le nom : ");
            fgets(contacts->nom[count] ,sizeof(contacts->nom[count]),stdin);
            printf("donner le numero : ");
            fgets(contacts->numero[count] ,sizeof(contacts->numero[count]),stdin);
            printf("donner  email : ");
            fgets(contacts->email[count] ,sizeof(contacts->email[count]),stdin);
            count++;
            break;
        case 2:
           char newEmail[200], newNumero[10];
           printf("donner le nom de cantact qui veux modifer : ");
           fgets(name , sizeof(name),stdin);
           for (int i = 0; i < count; i++)
           {
            if (strcmp(contacts->nom[i], name)==0)
            {
                int choix1;
                do
                {
                printf("1.modifier numero\n");
                printf("2.modifier email\n");
                printf("3.quitter\n");
                printf("votre choix : ");
                scanf("%d",&choix1);
                switch (choix1)
                {
                case 1:
                    printf("donner nouveux numero : ");
                    for (int j = 0; j < 10; j++)
                    {
                        fgets(newNumero[j],sizeof(newNumero[j]),stdin);
                        contacts->numero[i][j] = newNumero[j];
                    } 
                    break;
                case 2:
                    printf("donner nouveux email : ");
                    fgets(newEmail,sizeof(newEmail),stdin);
                    contacts->email[i]= newEmail;
                default:
                    printf("error");
                    break;
                }
                } while (choix1 != 3);
                
                

            }
            
           }
           
         break;
         case 3:
          printf("donner le nom qui veux supprimer : ");
          fgets(name,sizeof(name),stdin);
          for (int i = 0; i < count; i++)
          {
            if (strcasecmp(contacts->nom[i], name)==0)
            {
                for (int j = i; i < count-1; j++)
                {
                    contacts->nom[i]=contacts->nom[i+1];
                    for (int j = 0; i < 10; j++)
                    {
                       contacts->numero[i][j]=contacts->numero[i+1][j];
                    }
                    contacts->email[i]=contacts->email[i+1];
                }
              count--;  
            }
            
          }
          
          break;
          case 4:
          for (int i = 0; i < count; i++)
          {
            printf("contact %d",i);
            printf("nom : %s",contacts->nom[i]);
            printf("numero : %d",contacts->numero[i]);
            printf("email : %s",contacts->email[i]);

          }
          
          break;
          case 5:
          printf("donner le nom qui veux trouver : ");
          fgets(name,sizeof(name),stdin);
          for (int i = 0; i < count; i++)
          {
            if (strcasecmp(contacts->nom[i], name)==0)
            {
                for (int j = i; i < count-1; j++)
                {
                   printf("nome : %s\n",contacts->nom[i]) ;
                   printf("numero : ");
                   for (int a = 0; a < 10; a++)
                   {
                    printf("%d",contacts->numero[i][a]);
                   }
                   
                 
                   printf("email : %s\n",contacts->email[i]) ;
                   
                }
               
            }else {
                printf("pas trouver\n");
            }
            
          }
          break;
        default:
           printf("error");
            break;
        }
    } while (choix != 6);
    
}