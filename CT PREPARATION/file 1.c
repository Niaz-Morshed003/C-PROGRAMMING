#include<stdio.h>
int main ()
{
    FILE *a;
    a=fopen("niaz","w");
    if (a==NULL)
    {
        printf("error");
        return 1;
    }
    fputc('1',a);
    fputc(' ',a);
    fputs("NIAZ MORSHED\n",a);
    fputc('2',a);
    fputc(' ',a);
    fputs("raiyan\n",a);
    fputc('3',a);
    fputc(' ',a);
    fputs("mf\n",a);


    fclose(a);
    return 0;




}
