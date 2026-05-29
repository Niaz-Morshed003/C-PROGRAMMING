#include <stdio.h>

void addNumbers(int *a, int *b, int *sum) {
    *sum = *a + *b;
    printf("sum=%d",*sum);
}

int main() {
    int num1, num2, result;

    // Taking input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calling function to add numbers using pointers
    addNumbers(&num1, &num2, &result);



    return 0;
}

