//10
#include <stdio.h>
int main ()
{
    int num1,num2;
    char op;
    printf("Taking the numbers : ");
    scanf("%d%d",&num1,&num2);

    printf("Taking the op : ");
    scanf(" %c",&op);
    switch (op)
    {case '+' : printf("The addition : %d",num1+num2);
    break;
    case '-' : printf("The substraction : %d",num1-num2);
    break;
    case '*' : printf("The multipication : %d",num1*num2);
    break;
    case '/' : if (num2!=0)
     printf("The division : %d",num1/num2);
     else printf ("Invalid becuse of putting Zero");
     break;
     default : printf ("Invalid");}
     return 0;
}


