
#include <stdio.h>

int main() {
    int number, n, bitValue;

    // Input the number and the bit position
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter the bit position (n): ");
    scanf("%d", &n);

    // Use bitwise AND operation with a mask to retrieve the nth bit
    bitValue = (number >> n) & 1;

    // Output the result
    printf("%d\n", bitValue);  // Print only the result without additional text

    return 0;
}

