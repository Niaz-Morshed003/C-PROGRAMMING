#include <stdio.h>
int main()
{
    char s [10000];
    int i=0,word=0;
    printf("s=");
    gets(s);
    for(i=0;s[i]!=0;i++)
    {
        if (s[i]==' ')
            word++;
    }

    printf("word=%d",word+1);
}

