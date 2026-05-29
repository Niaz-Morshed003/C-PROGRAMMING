#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    // Open the file in read mode
    file = fopen("command.txt", "r");
    if (file == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }

    // Display the file content
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);
    return 0;
}

