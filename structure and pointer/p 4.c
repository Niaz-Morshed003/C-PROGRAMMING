#include <stdio.h>
#include <ctype.h> // For tolower() function

void countVowelsConsonants(char *str, int *vowels, int *consonants) {
    *vowels = *consonants = 0; // Initialize counts

    int i=0; for(i=0;str[i]!='\0';i++) { // Traverse the string using pointer
        char ch = tolower(*str); // Convert to lowercase for easy comparison

        if ((ch >= 'a' && ch <= 'z')) { // Check if it's a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }

    }
}

int main() {
    char str[100];
    int vowels, consonants;

    // Taking string input
    printf("Enter a string: ");
    scanf(" %[^\n]", str); // Reads entire line including spaces

    // Function call to count vowels and consonants
    countVowelsConsonants(str, &vowels, &consonants);

    // Displaying the result
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}

