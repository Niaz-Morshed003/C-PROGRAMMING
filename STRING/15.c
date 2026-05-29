#include<stdio.h>
int main ()
{
    char s[1000];
    int i=0,j=0,start=0,end=0;
    printf("s=");
    gets(s);
    for(i=0;s[i]!='\0';i++)

    {
        if (s[i]==' '||s[i+1]=='\0')
        {

                end=i-1;
               if (s[i+1]=='\0')

                  {
                  end=i;}


        for(j=end;j>=start;j--)
        {
            printf("%c",s[j]);
        }
        if (s[i]==' ')
            {printf(" ");}
            start=i+1;
    }
} }
i
