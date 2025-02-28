#include <stdio.h>

int main() {
    int n, i, j;

    // Input number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop for each row
    for(i = 1; i <= n; i++) {
        // Loop for spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Loop for stars
        for(j = 1; j <= i; j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
