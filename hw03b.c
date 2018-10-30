#include <stdio.h>
#include <stdlib.h>

int main()
{
  int width=0;
  int height=0;
  int fence=0;
  
  if(scanf("%d %d", &width, &height) == 2) {
    if(width>=3&&width<=69&&height>=3&&height<=69) {
      if(width % 2) {
        if(width==height) {
          
          if(scanf("%d", &fence) == 1) {
            if(fence>0&&fence<height) {
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
            
            for(int i=0; i<height; i++) {
              for(int a=0; a<width; a++) {
                if(i==0||a==0||i==height-1||a==width-1) {
                  printf("X");
                } else if((i+a)%2) {
                  printf("*");
                } else {
                  printf("o");                  }
                }
                for(int f=0; f<fence; f++) {
                  if(i==abs(fence-height)||i==height-1) {
                    if(fence%2) {
                      if(f%2) {
                        printf("-");
                      } else {
                        printf("|");
                      }
                    } else {
                        if(f%2) {
                        printf("|");
                      } else {
                        printf("-");
                      }
                    }
                  } else if (i>abs(fence-height)&&i<height-1) {
                    if(fence%2) {
                      if(f%2) {
                        printf(" ");
                      } else {
                        printf("|");
                      }
                    } else {
                      if(f%2) {
                        printf("|");
                      } else {
                        printf(" ");
                      }
                    }
                  }
                }
                printf("\n");
              }
              } else {
                fprintf(stderr,"Error: Neplatna velikost plotu!\n");
                return 103;
              }
            } else {
              fprintf(stderr,"Error: Chybny vstup!\n");
              return 100;
            }
            
          } else {
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
            
            for(int i=0; i<height; i++) {
              for(int a=0; a<width; a++) {
                if(i==0||a==0||i==height-1||a==width-1) {
                  printf("X");
                } else {
                  printf(" ");
                }
              }
              printf("\n");
            }
          }
          
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
