#include <stdio.h>

void main(){
    char c;
    
    c = getchar();
    while (c != EOF)
    {
        printf("  \n");
        putchar(c);
        c = getchar();
    }
    
}