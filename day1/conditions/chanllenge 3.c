#include <stdio.h>

void main(){
    int num1 , num2;
    printf("entre deux nombre : ");
    scanf("%d %d", &num1 , &num2);
    if(num1 == num2){
        printf("%d" , (num1 + num2)*3);
    }else printf("%d",num1 + num2);
    
}