#include <stdio.h>
#include <string.h>


typedef struct
{
    char nom[30];
    int score;
} Joueur;

typedef struct
{
    char q[100];
    char a[30];
    char b[30];
    char c[30];
    char vrai[30];
} Quetions;

int main()
{

    Quetions quetions[5] = {{"Quel mot-clé permet de définir une constante en C ?", "let", "const", "#define", "const"},
    {"Quel mot-clé permet de définir une constante en C ?", "let", "const", "#define", "const"},
{"Quel mot-clé permet de définir une constante en C ?", "let", "const", "#define", "const"},{"Quel mot-clé permet de définir une constante en C ?", "let", "const", "#define", "const"},
{"Quel mot-clé permet de définir une constante en C ?", "let", "const", "#define", "const"}};

    int choix;  
    char rep[30];
    int score = 0, count = 0;
    char name[30];
    Joueur joueurs[10];
     int com;
     
    
    
    do
    {
        printf("1.jouer\n2.voir le classemennt \n3.quitter\n voter choix: ");
        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
           printf("donner le nom : ");
           scanf("%s", name);
           strcpy(joueurs[count].nom, name);
           joueurs[count].score = score;
          
            for (int i = 0; i < 5; i++)
            {
                printf("Quetion %d : %s \n", i + 1, quetions[i].q);
                printf("a) %s \n", quetions[i].a);
                printf("b) %s \n", quetions[i].b);
                printf("c) %s \n", quetions[i].c);

                printf("donner le reponse : ");
                scanf("%s", rep);

                  

                if (strcmp(rep , "a") == 0)
                {
                    strcpy(rep ,"let");
                }
                else if (strcmp(rep , "c") == 0)
                {
                    strcpy(rep ,"#define");
                }
                else if (strcmp(rep , "b") == 0)
                {
                 strcpy(rep ,"const");
                }
                if (strcmp(quetions[i].vrai, rep) == 0)
                {

                    joueurs[count].score += 10;
                    
                }
            }
            count++;
                break;
            case 2:
              
                for (int i = 0; i < count-1; i++){
                   for (int j = 0; j < count-1 ; j++)
                   {
                    if(joueurs[j].score < joueurs[j+1].score ){

                        com = joueurs[j].score;
                        strcpy(name ,joueurs[j].nom);
                        strcpy(joueurs[j].nom, joueurs[j+1].nom);
                        strcpy(joueurs[j+1].nom , name);
                        joueurs[j].score = joueurs[j+1].score;
                        joueurs[j+1].score = com;

                    }
                   }
                
                }
                for (int i = 0; i < count; i++)
                { 
                    printf("class #%d\n" ,i+1);
                    printf("nom de jouer : %s\n",joueurs[i].nom);
                    printf("score de jouer : %d\n",joueurs[i].score);
                }
                
                break;

            default:
                printf("eerro");
                break;
            }
        }
        while (choix != 3);
            
    }
