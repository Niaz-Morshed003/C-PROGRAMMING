#include <stdio.h>

int stringLength(char *str) {
    char *ptr = str;
    int length = 0;

    while (*ptr != '\0') { // Loop until null character is found
        length++;
        ptr++; // Move pointer to the next character
    }

    return length;
}

int main() {
    char str[100];

    // Taking string input
    printf("Enter a string: ");
    scanf("%[^\n]",str); // Using gets() to take input with spaces (unsafe but simple)

    // Calculating length using pointer function
    int len = stringLength(str);

    // Displaying the result
    printf("Length of the string: %d\n", len);

    return 0;
}

