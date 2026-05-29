#include <stdio.h>
void print(char s[])
{
    printf("%s",s);
}
int main ()
{
    char c[1000];
    printf("c=");
    gets(c);
    print(c);

}
