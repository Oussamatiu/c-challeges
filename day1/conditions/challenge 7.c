#include <stdio.h>
int main()
{
    char alphabet ;
    printf("entre un alphabet : ");
    scanf("%c", &alphabet);
    int x = (int)alphabet;
    if (x >= 65 && x <= 90){
        printf("majuscule");
    }else if ( x < 65 || x > 90 ){
        printf("pas majuscule");
    }else printf("pas alphabet");
    
}