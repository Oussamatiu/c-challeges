#include <stdio.h>

void main (){
    int valeurs[] = {1 , 2, 3, 4, 5};
    int size = sizeof(valeurs) / sizeof(valeurs[0]);
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", valeurs[i]);
    }
    
}