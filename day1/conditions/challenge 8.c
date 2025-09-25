#include <stdio.h>

int main() {
  
  float note;
  printf("entre la note : ");
  scanf("%f", &note);
  if(note < 10 ){
    printf("recale");
  }else if(note >= 10 && note < 12){
    printf("passable");
  }else if(note >= 12 && note < 14){
    printf("assez bien");
  }else if(note >= 14 && note < 16){
    printf("bien");
  }else if (note >= 16 && note <= 20){
    printf("tres bien");
  }else printf("error");
  
 
    
  return 0;
}