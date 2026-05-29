#include<stdio.h>
int findsub(char a[],char b [])
{
    int i=0,j=0;
    for (i=0;a[i]!='\0';i++)
    {
        for (j=0;a[i+j]==b[j]&&b[j]!='\0';j++)
        { }
            {if (b[j]=='\0')
                return 1;

        }
    }

 return -1;
}
int main () {

 char s[1000], c[1000];
printf("s=");
gets(s);
printf("c=");
gets(c);
int r=findsub(s,c);
if (r==1)
    printf("found");
else printf("not found");}
