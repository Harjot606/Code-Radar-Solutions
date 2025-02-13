#include <stdio.h>

int main() {
    int number, bitPosition;
    scanf("%d", &number);
    scanf("%d", &bitPosition);

    // Output the value of the nth bit
    printf(" %d\n", bitPosition, (number >> bitPosition) & 1);
    
    return 0;
}