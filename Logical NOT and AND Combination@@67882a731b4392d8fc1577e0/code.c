#include <stdio.h>

int main() {
    int a;
    int b;

    // Read input
    scanf("%d", &a);
    scanf("%d", &b);

    // Check if either a or b is less than or equal to 0
    if (!(a > 0 && b > 0)) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
