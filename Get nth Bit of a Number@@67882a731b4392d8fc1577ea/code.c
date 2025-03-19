#include <stdio.h>

int main() {
    int number, n, bitValue;



    scanf("%d", &number);
  
    scanf("%d", &n);

    // Use bitwise AND operation with a mask to retrieve the nth bit
    bitValue = (number >> n) & 1;

    // Output the result
    printf("%d\n", n, bitValue);

    return 0;
}
