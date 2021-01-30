#include <stdio.h>
#define MAXLINE 1000

void reverse(char s[]);
int line(char line[], int max);

void main()
{
    char line1[MAXLINE];
    int len;
    while ((len = line(line1,MAXLINE)) > 0)
    {
        reverse(line1);
        printf("%s", line1);
    }
    
}

int line(char line[], int maxlen)
{
    int c, i;

    for (i = 0; i < maxlen-1 && (c = getchar()) != EOF; i++)
    {
        line[i] = c;
        if (c == '\n')
        {
            i++;
            break;
        }
    }
    if (c == '\n')
    {
        line[i] = '\0';
    }

    return i;
}

void reverse(char s[])
{
    int len;
    for ( len = 0; s[len] != '\n'; len++)
    {
        ;
    }

    printf("%d\n", len);
    for (int i = 0; i <= len/2-1; i++)
    {
        int j = len -1 - i;
        char temp;
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    s[len+1] = '\0';
    
    
}