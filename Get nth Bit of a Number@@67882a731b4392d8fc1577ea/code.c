#include <stdio.h>

int main() {
    int num, n;
    
    // Input: number and the position (n) of the bit to check
    printf("Enter the number: ");
    scanf("%d", &num);
    
    printf("Enter the position (n): ");
    scanf("%d", &n);
    
    // Create a mask by shifting 1 to the left by 'n' positions
    int mask = 1 << n;
    
    // Check if the nth bit is set (1) or not (0)
    if (num & mask) {
        printf("The %dth bit is set (1).\n", n);
    } else {
        printf("The %dth bit is not set (0).\n", n);
    }
    
    return 0;
}
