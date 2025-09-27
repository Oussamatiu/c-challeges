#include <stdio.h>


int main (){
    char liste[50], liste1[30] ;
    int somme = 0 , i=0 , somme1 = 0 , j ,found;
    printf("donner un liste de caracteres : ");
    fgets(liste ,sizeof(liste), stdin);
    printf("donner un liste de caracteres 2: ");
   
    fgets(liste1 ,sizeof(liste1), stdin);

    for (int x1 = 0; liste1[x1]!='\0'; x1++)
    {
       if (liste1[x1] == '\n')
      {
         liste1[x1]='\0';
         break;
      }
    }
     for (int x = 0; liste[x]!='\0'; x++)
    {
       if (liste[x] == '\n')
      {
         liste[x]='\0';
         break;
      }
    }

    while(liste[i] != '\0'){
    
      
       somme +=1;
       i++;
    }
    i=0;
     while(liste1[i] != '\0'){
       somme1 +=1;
       i++;
    }
   
    
    
    i = 0;
    for ( i = 0; i <= somme - somme1; i++)
    {
      found=1;
      for ( j = 0; j < somme1; j++)
      {
        if (liste[i + j] != liste1[j])
        {
          found=0;
          break;
        }
        
      }
      if(found) break;
      
    }
    if (found)
    {
      printf("trouve");
    }else {
      printf("non");
    }
      
    return 0;
    
  
  }
