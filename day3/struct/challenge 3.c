#include <stdio.h>
struct rectangle
    {
       float longueur ;
       float largeur;
       
    };
    float aire(float longueur , float largeur){
       float aire = longueur * largeur;
       return aire;
    }

int main(){
    struct rectangle rec;
   
    
    printf("donner longueur de rectangle : ");
    scanf("%f",&rec.longueur);
    printf("donner largeur de rectangle : ");
    scanf("%f",&rec.largeur);
    printf("l'aire du rectangle est %.2f", aire(rec.longueur,rec.largeur));
   



   

    
}