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
        if (ch=='\n')
            len++;
    }


    fclose(file);
    printf("newline=%d",len);

    return 0;
}
