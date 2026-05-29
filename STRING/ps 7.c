#include<stdio.h>
int main ()
{
    char s[10000];
    printf("s=");
    gets(s);
    int i=0;
    for(i=0;s[i]!=0;i++)
    {
        if (s[i]>96&&123>s[i])
            s[i]=s[i]-32;
            else if (s[i]>64&&91>s[i])
            s[i]=s[i]+32;

    }


    printf("togg=%s",s);


}

