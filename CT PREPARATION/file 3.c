
#include <stdio.h>

int main() {
    FILE *file;
    char ch; int len =0;

    // Open the file in read mode
    file = fopen("niaz", "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }


    while ((ch = fgetc(file)) != EOF) {
        if (ch>96&&ch<123)
            {ch=ch-32;}
            putchar(ch);
    }


    fclose(file);

    return 0;
}
