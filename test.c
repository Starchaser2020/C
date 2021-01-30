#include <stdio.h>

#define TABW 8
#define MAXLEN 1000
#define linelimt 10

void entab(char s[]);
void entab1(char s[]);
void huanhang(char s[], char s1[]);

void main()
{
    char s1[MAXLEN];
    char s[] = "123456789-123456789123456789123456789";
    huanhang(s, s1);
    printf("%s\n", s1);
}
void entab(char s[])
{
    int i, j, c;
    char s1[MAXLEN];
    int tp = -1;
    int sp = -1;

    for (i = 0, j = 0; (c = s[i]) != '\0'; i++, j++)
    {
        s1[j] = c;

        if (c == '\t')
        {
            tp = TABW - 1;
        }
        else
        {
            tp++;
        }

        if (c == ' ')
        {
            if (sp == -1)
            {
                sp = tp;
            }
            else
            {
                sp = -1;
            }
        }

        if (tp == TABW - 1)
        {
            if (sp != -1)
            {
                int spacew = TABW - sp;
                j = j - spacew + 1;
                s1[j] = '-';
                sp = -1;
            }
            tp = -1;
        }
    }
    s1[j] = '\0';
}

void entab1(char s[])
{
    int i, j, k, c;
    int flag = 0;
    j = 0;
    i = 0;

    while ((c = s[i]) != '\0')
    {
        for (k = i; k < (i / TABW + 1) * TABW; k++)
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
            s[j++] = '-';
            i = (i / TABW + 1) * TABW;
        }
        else
        {
            s[j++] = c;
            i++;
        }
    }
    s[j] = '\0';
}

void huanhang(char s[], char s1[])
{

    int i, j, c;

    int tp = -1;
    int sp = -1;

    for (i = 0, j = 0; (c = s[i]) != '\0'; i++, j++)
    {

        ++tp;
        s1[j] = c;

        if (c == '-' || c == '\t')
        {
            if (sp == -1)
            {
                sp = tp;
            }
        }
        else
        {
            sp = -1;
        }

        if (tp == linelimt - 1)
        {
            if (sp != -1)
            {
                if (c == '-')
                {
                    int spacew = linelimt - sp;
                    s1[j - spacew + 1] = '\n';
                    ++j;
                    s[j] = ' ';
                }
                if (c == '\t')
                {
                    s1[j] = '\n';
                    j++;
                    s1[j] == '\t';
                }
                
            sp = -1;
            }
            else
            {
                j = j + 1;
                s1[j] = '\n';
            }
            tp = -1;
        }
    }

    s1[j] = '\0';
}