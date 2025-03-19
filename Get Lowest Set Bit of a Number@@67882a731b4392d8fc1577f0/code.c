// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int lowest_set_bit = n & -n;

    // Output the result
    printf("%d\n", lowest_set_bit);

    return 0;
}
