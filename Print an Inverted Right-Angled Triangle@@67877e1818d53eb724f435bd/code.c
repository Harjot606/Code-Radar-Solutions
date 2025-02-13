#include<stdio.h>
int main(){
    int a;
    int i, j;

    scanf("%d", &a);  // Read the input for the number of rows

    for(i = a; i >= 1; i--){  // Outer loop for rows (starting from a to 1)
        for(j = 1; j <= i; j++){  // Inner loop for printing "*"
            printf("*");
        }
        printf("\n");  // Move to the next line after printing all stars in a row
    }

    return 0;
}

