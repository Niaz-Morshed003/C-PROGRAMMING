//11
#include <stdio.h>

int main() {
    unsigned int unsignedIntValue;
    unsigned long int unsignedLongIntValue;
    unsigned long long int unsignedLongLongIntValue;
    unsigned short int unsignedShortIntValue;

    // First set of values: maximum values for each unsigned type
    unsignedIntValue = 4294967295;
    unsignedLongIntValue = 4294967295;
    unsignedLongLongIntValue = 18446744073709551615U;
    unsignedShortIntValue = 65535;

    printf("The unsigned int value: %u\n", unsignedIntValue);
    printf("The unsigned long int value: %lu\n", unsignedLongIntValue);
    printf("The unsigned long long int value: %llu\n", unsignedLongLongIntValue);
    printf("The unsigned short int value: %hu\n\n", unsignedShortIntValue);

    // Second set of values: minimum values (0) for each unsigned type
    unsignedIntValue = 0;
    unsignedLongIntValue = 0;
    unsignedLongLongIntValue = 0;
    unsignedShortIntValue = 0;

    printf("The unsigned int value: %u\n", unsignedIntValue);
    printf("The unsigned long int value: %lu\n", unsignedLongIntValue);
    printf("The unsigned long long int value: %llu\n", unsignedLongLongIntValue);
    printf("The unsigned short int value: %hu\n", unsignedShortIntValue);

    return 0;
}

