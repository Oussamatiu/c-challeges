#include <stdio.h>
#include <string.h>
#define MAX 100
struct Contact
{
    char nom[30];
    char numero [10];
    char email[200];
};

int main(){
    int choix , count=0 ;
    char name[30];
    char newEmail[200] ;
    char newNumero[10];
    
    struct Contact contacts[MAX];

    
    
    
    do
    {
        printf("===menu===\n1.ajoute un contact\n2.modifier un contact\n3.Supprimer un Contact\n4.Afficher Tous les Contacts\n5.Rechercher un Contact\n6.quitter\nvoutre choix : ");
        scanf("%d", &choix);
        getchar();
        switch (choix)
        {
        case 1:
           
            printf("donner nom : ");
                scanf("%[^\n]",contacts[count].nom);
                
                getchar();
                printf("donner numero : ");
                scanf("%[^\n]",contacts[count].numero);
                
                getchar();
                printf("donner email : ");
                scanf("%[^\n]",contacts[count].email);
            count++;
            break;
        case 2:
           
           printf("donner le nom de cantact qui veux modifer : ");
           fgets(name , sizeof(name),stdin);
           for (int i = 0; i < count; i++)
           {
            if (strcmp(contacts[i].nom, name)==0)
            {
                int choix1;
                do
                {
                printf("1.modifier numero\n");
                printf("2.modifier email\n");
                printf("3.quitter\n");
                printf("votre choix : ");
                scanf("%d",&choix1);
                getchar();
                switch (choix1)
                {
                case 1:
                    printf("donner nouveux numero : ");
                    
                        scanf("%s", &newNumero);
                        strcpy(contacts[i].numero,newNumero);
    
                    break;
                case 2:

                    printf("donner nouveux email : ");
                    fgets(newEmail,sizeof(newEmail),stdin);

                    strcpy(contacts[i].email , newEmail);

                    break;
                default:
                    printf("error");
                    break;
                }
                } while (choix1 != 3);
                
                

            }else {
                printf("not found\n");
            }
            
           }
           
         break;
         case 3:
          printf("donner le nom qui veux supprimer : ");
          fgets(name,sizeof(name),stdin);

          for (int i = 0; i < count; i++)
          {
            if (strcasecmp(contacts[i].nom, name)==0)
            {
                for (int j = i; i < count-1; j++)
                {
                    strcpy(contacts[i].nom ,contacts[j+1].nom);
                    strcpy(contacts[i].numero ,contacts[j+1].numero);
                    strcpy(contacts[i].email ,contacts[j+1].email);
                }
              count--;  
            }else {
                printf("not found\n");
            }
            
          }
          
          break;
          case 4:
          if (count == 0)
          {
            printf("no contact\n");
          }else{
             for (int i = 0; i < count; i++)
          {
            printf("contact %d\n",i+1);
            printf("nom : %s\n", contacts[i].nom);
            printf("numero : %s\n" , contacts[i].numero) ;
            printf("email : %s\n" , contacts[i].email);

          }
          }
          
          
          
          break;
          case 5:
          printf("donner le nom qui veux trouver : ");
          fgets(name,sizeof(name),stdin);
          int found=0;
          for (int i = 0; i < count; i++)
          {
            
            if (strcasecmp(contacts[i].nom, name) == 0)
            {
                
                
                   printf("nome : %s\n",contacts[i].nom) ;
                   printf("numero %s\n",contacts[i].numero);
                   printf("email : %s\n",contacts[i].email) ;
                   found=1;
                
               
            }
            
          }
          break;
        default:
           printf("error");
            break;
        }
    } while (choix != 6);
    
}