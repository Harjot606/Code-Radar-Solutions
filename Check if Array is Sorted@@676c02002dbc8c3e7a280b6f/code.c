#include<stdio.h>

int sorted_arr(int arr[], int N) {
    for (int i = 0; i < N - 1; i++) { // Loop until N-1
        if (arr[i] > arr[i + 1]) { // Compare adjacent elements
            return 0; // Return 0 if not sorted
        }
    }
    return 1; // Return 1 if sorted
}

int main() {
    int N;
    scanf("%d", &N); // Input array size

    if (N <= 0) {
        return 1; // Exit program if size is invalid
    }

    int arr[N]; // Declare array with size N
    for (int j = 0; j < N; j++) { // Loop to input array elements
        scanf("%d", &arr[j]);
    }

    // Call the sorted_arr function and check the result
    if (sorted_arr(arr, N)) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }

    return 0;
}
