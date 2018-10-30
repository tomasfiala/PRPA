#include <stdio.h>
#include <stdlib.h>

int main()
{
  int width=0;
  int height=0;
  
  if(scanf("%d %d", &width, &height) == 2) {
    if(width>=3&&width<=69&&height>=3&&height<=69) {
      if(width % 2) {
        
        for(int i=0; i<(width/2); i++) {
          for(int a=0; a<width; a++) {
            if((a==i+(width/2))||(width/2==a+i)) {
              printf("X");
            } else if ((a<i+(width/2))||(abs(a-i)<width/2)) {
              printf(" ");
            } else if (a==i+(width/2)+1) {
              printf("\n");
            }
          }
        }
        
        for(int i=0; i<width; i++) {
          printf("X");
        }
        printf("\n");
        for(int i=0; i<(height-2); i++) {
          printf("X");
          for(int a=0; a<(width-2); a++) {
            printf(" ");
          }
          printf("X\n");
        }
        for(int i = 0; i < width; i++) {
          printf("X");
        }
        printf("\n");
    
      } else {
        fprintf(stderr,"Error: Sirka neni liche cislo!\n");
        return 102;
      }
    } else {
    fprintf(stderr,"Error: Vstup mimo interval!\n");
    return 101;
    }
  } else {
    fprintf(stderr,"Error: Chybny vstup!\n");
    return 100;
  }
  return 0;
}
