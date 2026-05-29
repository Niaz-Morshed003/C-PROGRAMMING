#include <stdio.h>

int main() {
    int n, i, j;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array of size n

    // Input the elements of the array
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Print the array after removing duplicates
    printf("Array after removing duplicates: ");
    for (i = 0; i < n; i++) {
        // Check if the element has already been printed
        for (j = i+1; j < i; j++) {
            if (arr[i] == arr[j]) {
                continue; // Skip this element if it is a duplicate
            }
        }
        // If it's not a duplicate, print it
        printf("%d ", arr[i]);
    }

    return 0;
}

