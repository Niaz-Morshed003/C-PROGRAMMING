int main() {
    int sum = 0, a = 1, b = 6;

    // Outer loop using 'for'
    for (int i = 1; i <= 20; i++) {
        int product = 0, count = 0;

        // Inner loop using 'while' to calculate product (a * b)
        while (count < 1) {
            product = a * b;
            count++;
        }

        sum += product;  // Add the product to the sum

        // Update 'a' and 'b' for the next term
        a += 4;
        b += 5;
    }

    printf("Sum of the series = %d\n", sum);
    return 0;
}
