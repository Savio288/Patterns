#include <stdio.h>

int main() {
   int i=5;
   while(i>=0)
   {
      int j=0;
    while(j<i)
        {
            printf("*");
            j=j+1;
        }    
    printf("\n");    
    i=i-1 ; 
   }
    return 0;
}
