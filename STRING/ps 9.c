#include <stdio.h>

int main()

{ char s[1000];
char c;
int i=0,count=0;
printf("s=");
gets(s);
printf("c=");
scanf("%c",&c);
if (c>96&&123>c)
{
    c=c-32;
}

for(i;s[i]!='\0';i++)
{

    if (s[i]>96&&123>s[i])
{
    s[i]=s[i]-32;
}
 if (s[i]==c)
    count++;

}






    printf("count=%d",count);




}
