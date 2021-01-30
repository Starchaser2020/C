#include <stdio.h>
#define TABW 8
#define MAXLEN 1000

void detab(char src[], char tar[]);

void main(){
    char s1[] = "123\t456\n";
    char s2[MAXLEN];
    detab(s1,s2);
    printf("%s\n%s\n", s1,s2);
    
}
void detab(char src[], char tar[]){
    int c, i, j, spacew;
    j = 0;

    for ( i = 0; i < MAXLEN-1 && (c = src[i]) != '\0'; i++)
    {
        if (c != '\t')
        {
            tar[j++] = c;
        }else if(c == '\t')
        {
            spacew = TABW - j%TABW;
            while (spacew-- >0)
            {
                tar[j++] = '-';
            }
           
        }
        
        
    }
    
}