#include<stdio.h>
int main()
{
    char s[1000],maxc;
    int i=0,j=0,count,maxco=0;
    printf("s=");
    gets(s);
    for(i=0;s[i]!=0;i++)
    { count=0;
        if (s[i]>96&&123>s[i])
            s[i]=s[i]-32;
            for(j=0;s[j]!='\0';j++)
            {
                if (s[i]==s[j]||s[i+32]==s[j]||s[i-32]==s[j])
                    count++;
            }
         if(count>maxco)
         { maxco=count;
            maxc=s[i];

         }
    }


   if (maxc > 64 && maxc < 91) {

        printf("The highest occurring character is '%c' or '%c'.\n", maxc, maxc + 32);
    } else {

        printf("The highest occurring character is '%c' or '%c'.\n", maxc, maxc - 32);
    }



}
