//15
#include<stdio.h>
int main ()
{
    printf("A STANDS FOR THE EXACT NUMBER\nTHAT PLAYER 1 HAS GUESSED\n");
    printf("B STANDS FOR THE EXACT NUMBER\nTHAT PLAYER 2 WILL GUESS\n");
    int A,B;
    printf ("PLAYER 1, KINDLY INPUT YOUR NUMBER :");
    scanf ("%d",&A);
    printf ("PLAYER 2, KINDLY INPUT YOUR NUMBER :");
    scanf ("%d",&B);
    if (A==B)
        printf("PLAYER 2 WINS.");
    else {
        printf ("PLAYER 2,YOU HAVE 2 MORE CHANCES LEFT.\n");
        printf ("PLAYER 2, KINDLY INPUT YOUR NUMBER :");
        scanf ("%d",&B);
    if (A==B)
        printf("PLAYER 2 WINS.");
        else { printf ("PLAYER 2,YOU HAVE 1 MORE CHANCES LEFT.\n");
        printf ("PLAYER 2, KINDLY INPUT YOUR NUMBER :");
        scanf ("%d",&B);
    if (A==B)
        printf("PLAYER 2 WINS.");
        else
            printf("PLAYER 2 LOSES."); }}

return 0;}





