#include<stdio.h>
int main ()
{
    char s[10000];
    int i=0,sum=0;
    printf("s=");
    gets(s);
    for(i;s[i]!='\0';i++)
    {
        if (s[i]>47&&58>s[i])
        {
            sum=sum+(s[i]-48);
        }
    }

    printf("sum=%d",sum);
}
