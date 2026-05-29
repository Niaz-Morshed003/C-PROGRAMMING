#include<stdio.h>
void len(char a[],char b[])
{
    int j=0,i=0,count1=0,count2=0;
    for(i;a[i]!='\0';i++)
    {
        count1++;
    }
    printf("%d\n",count1);
    for(j;b[j]!='\0';j++)
    {
        count2++;
    }
    printf("%d\n",count2);
}  void findsub(char a[],char b [])
{
    int i=0,j=0,found;
    for (i=0;a[i]!='\0';i++)
    {
        for (j=0;a[i+j]==b[j]&&b[j]!='\0';j++)
        { }
            {if (b[j]=='\0')
               found=1;

        }
    }

if (found=1)
    printf("1");
    else printf("-1");

} int main ()

{
    char d[1000],e[1000];
    printf("d=");
    gets(d);
    printf("e=");
    gets(e);
    len(d,e);
    findsub(d,e);

}
