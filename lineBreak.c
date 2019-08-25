#include <stdio.h>
#define MAXLINE 1000

void lineBreak();

int main()
{
   lineBreak();
    return 0;
}

void lineBreak()
{
    int c, i, charCount;
    char s[MAXLINE];
    charCount = 0;
    i = 0;

    while ((c = getchar()) != EOF){
        charCount++;
        if(charCount >= 55)
        {
            if(c != ' ')
            {
                s[i] = '-';
                s[i+1] = '\n';
                s[i+2] = c;
                i = i + 2;

            } else
            {
                c = '\n';
                s[i] = c;
            }
            charCount = 0;
        }
        else if (charCount >= 50 && c == ' ') 
        {
            c = '\n';
            s[i] = c;
            charCount = 0;
        }
        else
        {
           s[i] = c;
        }
        i++; 
    }
    s[i] = '\0';
    printf("\n%s", s);
}