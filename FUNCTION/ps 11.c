#include<stdio.h>
void len(char s[])
{
    int count=0;
    for(int i=0;s[i]!='\0';i++)
    {
        count++;
    }
    printf("length=%d",count);
}

int main ()
{
    char c[10000];
    printf("c=");
    gets(c);
    len(c);






}
