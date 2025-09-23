#include <stdio.h>

void main(){
    int num;
    printf("entre un nomber : ");
    scanf("%d", &num);
    if (num % 2 == 0){
        printf("paire");
    }else if( num % 2 != 0){
        printf("impaire");
    }else printf("pas nomber");
}