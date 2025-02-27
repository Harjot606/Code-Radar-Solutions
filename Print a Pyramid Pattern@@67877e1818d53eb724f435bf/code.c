#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);  // Get the number of rows for the pyramid
    int i, j, k;

    // Loop for each row
    for(i = 1; i <= N; i++){
        // Loop for spaces before the stars
        for(j = i; j < N; j++){
            printf(" ");
        }
        // Loop for printing stars
        for(k = 1; k <= (2 * i - 1); k++){
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
