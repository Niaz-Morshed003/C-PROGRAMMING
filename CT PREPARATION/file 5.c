#include<stdio.h>
int main ()

{ FILE *a,*b;
char ch;
 a=fopen("niaz","r");
 b=fopen("raiyan","w");
 if(a==NULL)
 {
     return 1;
 }
   if(b==NULL)
 {
     return 1;
 }

 while((ch=getc(a))!=EOF)
 {
     fputc(ch,b);
 }
    fclose(a);
    fclose(b);




}
