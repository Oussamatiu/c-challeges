#include <stdio.h>
int main()
{
  int num;
  printf("entre nombre : ");
  scanf("%d",&num);
  if(num <  0){
    printf("negatif");
  }else if (num > 0){
    printf("positif");
  }else printf("null");
    
}