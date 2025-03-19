
#include <stdio.h>

int main() {
    int n;

    // Get input from the user
    scanf("%d", &n);

    if (n == 0) {
        return 0;
    }

    // Calculate the lowest set bit using the formula n & -n
    int lowest_set_bit = n & -n;

    // Find the position of the lowest set bit (0-based index)
    int position = 0;
    while (lowest_set_bit > 1) {
        lowest_set_bit >>= 1;
        position++;
    }

    // Output the result
    printf("%d\n", position);

    return 0;
}
