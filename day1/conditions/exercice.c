#include <stdio.h>
int main()
{
    unsigned int a , b, c;
    printf("entre a b c : ");
    scanf("%d %d %d",&a ,&b ,&c);
    if( a + b > c || a + c > b || c + b > a){
      if ( a == b && a == c && c == b ){
        printf("Équilatéral ");
      }else if
      ((c != b && a == b && a == c )
      || (c == b && a != b && a == c ) || 
      (c == b && a == b && a != c )){
        printf("Isocèle");
      }else printf("Scalène");
      
    } else printf("pas triangle");
    
}