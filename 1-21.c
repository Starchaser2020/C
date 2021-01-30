#include <stdio.h>

#define MAXLEN 1000
#define TABW 8

int getLine(char line[], int maxlen);
void entab(char s[]);

void main(){
    char line[MAXLEN];

    while (getLine(line,MAXLEN))
    {
        entab(line);
        printf("%s", line);
    }
    
}

int getLine(char line[], int maxlen){
    int c, i;

    for ( i = 0; i < maxlen - 1 && (c = getchar()) != EOF; i++)
    {
        line[i] = c;
    }
    if (line[i] == '\n')
    {
        i++;
        line[i] = '\0';
    }
    return i;
    
}

void entab(char s[]){
    int i, j, k, c;
    int flag = 0;
    j = 0;

    for ( i = 0; (c = s[i]) != '\0'; i++)
    {
        for ( k = i; k < (i/TABW + 1) * TABW; k++)
        {
            if (s[k] != ' ')
            {
                flag = 0;
                break;
            }
            flag = 1;
        }

        if (flag)
        {
            s[i] = '-';
            i = (i/TABW + 1) * TABW;
        }else
        {
            s[j++] = c;
        }
        
        
        
    }
    
}