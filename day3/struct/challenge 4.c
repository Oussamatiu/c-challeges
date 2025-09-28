#include <stdio.h>
struct point
    {
       int x ;
       int y;
       
    };
  
int main(){
    int *p;
    int *p1;
    struct point poi;

    printf("donner x : ");
    scanf("%d",&poi.x);
    printf("donner y : ");
    scanf("%d",&poi.y);
    p = &poi.x;
    p1 = &poi.y;
    
      
}