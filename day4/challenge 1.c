#include <stdio.h>

void change(int *a , int *b){
    int com = *a;
    *a = *b;
    *b = com;
}

void afficher(int tab[], int taille){
    for (int i = 0; i < taille ; i++){
        printf("%d ", tab[i]);
    }
}

void tri(int tab[]  , int taille ){
       for (int  i = 0; i < taille - 1; i++)
       {
        for (int j = 0; j < taille - i - 1; j++)
        {
            if(tab[j] > tab[j+1]){
               change( &tab[j] , &tab[j+1] );
            }
        }
        
       }
       
}

int main()
{
    int taille = 5;
    int table[] = {5, 1, 8, 3, 4};
    printf("tableaux avant tri : ");
    afficher(table , taille);
    tri(table ,taille);
    printf("tableaux aprit tri : ");
    afficher(table , taille);
}