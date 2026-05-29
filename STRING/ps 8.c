#include<stdio.h>
int main ()
{
    char s[10000];
    printf("s=");
    gets(s);
    int i=0,j=0,temp;
    for(i=0;s[i]!=0;i++)
    {
        for(j=i+1;s[j]!=0;j++)
        {
          if(s[i]>s[j])
          {
              temp=s[i];
              s[i]=s[j];
              s[j]=temp;
          }
        }
    }


    printf("in order=%s",s);


}


