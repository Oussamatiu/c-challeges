#include <stdio.h>

void main (){
    int num ;
    printf("donner un nombre : ");
    scanf("%d",&num);
    for (int i = 1 ; i <= 10 ; i++){
        printf("%d * %d = %d\n", num , i , i * num);
    }
}