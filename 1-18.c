#include <stdio.h>
#define MAXLINE 1000

void copy(char to[], char from[]);
int getline1(char line[], int max);

void main(){
    char line[MAXLINE];
    char line80[MAXLINE];
    int len;

    while ((len = getline1(line, MAXLINE)) >= 0)
    {
        
    }
    

}

int getline1(char line[], int max){
    int c, i;

    for ( i = 0; i < max-1 && (c = getchar() != EOF) && c != '\n'; i++)
    {
        line[i] = c;
    }
    if (c == '\n')
    {
        line[i] = '\n';
        ++i;
    }
    line[i] = '\0';
    return i;

    
    
}

void copy(char to[], char from[]){
    int i;
    i = 0;

    while ((to[i] = from[i]) != EOF)
    {
        ++i;
    }
    

}