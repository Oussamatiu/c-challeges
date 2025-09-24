#include <stdio.h>

void main (){
    int num  ;
    printf("donner un nombre : ");
    scanf("%d",&num);
    int i = 1;
    while (i <= num)
    {
        if (i % 2 != 0)
        {
            printf("%d " , i);
        }
        i++;
        
    }
    
}