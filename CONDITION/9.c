#include <stdio.h>
int main() {
    int a, b;

    printf("say player 1=");
    scanf("%d", &a);

    printf("say player 2=");
    scanf("%d", &b);

    if (a == b)
        printf("player 1 wins\n");
    else {
        printf("3 chances left\n");
        printf("say player 2=");
        scanf("%d", &b);
        if (a == b)
            printf("player 1 wins\n");
        else {
            printf("2 chances left\n");
            printf("say player 2=");
            scanf("%d", &b);
            if (a == b)
                printf("player 1 wins\n");
            else {
                printf("1 chance left\n");
                printf("say player 2=");
                scanf("%d", &b);
                if (a == b)
                    printf("player 1 wins\n");
                else
                    printf("player 2 wins\n");
            }
        }
    }

    return 0;
}

