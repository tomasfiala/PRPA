#include <stdio.h>
#inlude <stdlib.h>

int main()
{
    int a,b,sum;
    scanf("%d %d", &a, &b);
    
    if(abs(a) <= 10000 && abs(b) <= 10000) {
      printf("Desitkova soustava: %d %d\n", a, b);
      
      printf("Sestnactkova soustava: %x %x\n", a, b);
      
      sum = a + b;
      printf("Soucet: %d + %d = %d\n", a, b, sum);
      
      sum = a - b;
      printf("Rozdil: %d - %d = %d\n", a, b, sum);
      
      sum = a * b;
      printf("Soucin: %d * %d = %d\n", a, b, sum);
      
      if(b == 0){
        printf("Nedefinovany vysledek!\n");
      } else {
        sum = a / b;
        printf("Podil: %d / %d = %d\n", a, b, sum);
      }
      
      float x = (float)a, y = (float)b, sumf;
      sumf = (x + y)/2;
      printf("Prumer: %.1f\n", sumf);
      
      
    } else {
      printf("Vstup je mimo interval!\n");
    }

    return 0;
}
