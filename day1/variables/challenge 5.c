#include <stdio.h>
int main(void){

  int c;
  printf("entre c : ");
  scanf("%d" ,&c);

  if(c < 0){

    printf("solid");

  }else if(0 <= c && c < 100 ){
    printf("liquide");
  }else{
    printf("Gaz");
  }

  return 0;
}