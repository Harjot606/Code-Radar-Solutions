// Your code here...
#include <stdio.h>

int main() {
    int number, n;

    scanf("%d", &number);

    scanf("%d", &n);

    int mask = ~(1 << n);

    number = number & mask;

    // Output the result
    printf("%d\n", number);

    return 0;
}
