#include<stdio.h>
int main ()
{
    char s[10000],w[10000];
    int i=0,j=0,count=0,match;
    printf("s=");
    gets(s);
    printf("w=");
    gets(w);
    for(i=0;s[i]!='\0';i++)
    {
        for (j=0;w[j]!='\0';j++)
        {
             match=1;
            if(s[i+j]!=w[j])
                {match=0;
            break;}
        }
        if(match==1&&(s[i+j]==' '||s[i+j]=='\0')&&(i==0||s[i-1]==' '))
            count++;
    }
    printf("occur=%d times",count); return 0;
}
