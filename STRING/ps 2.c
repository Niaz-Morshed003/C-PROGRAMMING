
#include <stdio.h>
int main ()
{ char s[100];char f[1000];char c[10000];
int i=0,j=0,len=0,k=0;
 printf("s=\n");
 gets(s);
 printf("f=\n");
 gets(f);
 for(i=0;s[i]!='\0';i++)
 {
    len++;
 }
    for(j=0;f[j]!='\0';j++)
    {
        s[len+j]=f[j];
    }
      s[len+j]='\0';

    for(k=0;s[k]!='\0';k++)
    {
        c[k]=s[k];
    }
    c[k]='\0';
 printf("cat is %s",c);
 return 0;






}
