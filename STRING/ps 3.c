#include <stdio.h>
int main()
{
    char s [10000];
    int i=0,vow=0;
    printf("s=");
    gets(s);
    for(i=0;s[i]!=0;i++)
    {
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            vow++;
    }

    printf("vowel=%d",vow);
}
