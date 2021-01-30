#include <stdio.h>

void main(){

    int c, nl, nt, ns;

    nl = nt = ns = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
            printf("nl = %d\n", nl);
        }else if (c == '\t')
        {
            ++nt;
            printf("nt = %d", nt);
        }else if (c == ' ')
        {
            ++ns;
            printf("ns = %d", ns);
        }else
        {
        }       
    }
    
}