// Your code here...
#include<stdio.h>

int main() {
    int n;
    int i, j;
    char letter;  // Start with 'A'
    
    scanf("%d", &n);

    // Outer loop for each row
    for(i = 1; i <= n; i++) {
        letter = 'A';
        // Print alphabets from 'A' to the i-th letter
        for(j = 1; j <= i; j++) {
            printf("%c ", letter);
            letter++;  // Increment to the next alphabet
        }
        printf("\n");
    }

    return 0;
}

