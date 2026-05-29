#include<stdio.h>
int main ()
{
    FILE *a;
    a=fopen("raiyan","w");
    if (a==NULL)
    {
        printf("error");
        return 1;
    }



    fclose(a);
    return 0;




}

