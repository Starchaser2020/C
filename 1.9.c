#include <stdio.h>

void main(){
     int c, pre;
     while ((c = getchar())!= EOF)
     {
         if (c != ' '||pre != ' ')
         {
             printf("%d", pre);
             putchar(pre = c);
         }
     }
     
}