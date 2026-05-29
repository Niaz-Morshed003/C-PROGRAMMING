#include <stdio.h>
int main ()
{
    char s[10000],s1[1000000];
    int i=0,j=0,len=0;
    printf("s=");
    gets(s);
    for(i;s[i]!='\0';i++)
    {
        len++;
    }

    for(j,i=len-1;i>0;i--,j++)
    {
        s1[j]=s[i];
    }
    s1[j]='\0';


    for(i=0;s[i]!='\0'&&s1[i]!='\0';i++)
    {
        if (s[i]!=s1[i])
        {
            printf("no");
            return 0;
        }
    }

    printf("yes");
}
