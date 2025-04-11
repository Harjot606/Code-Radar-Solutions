#include<stdio.h>

int first_peak(int arr[], int N) {
    // Handle edge case for single-element array
    if (N == 1) {
        return arr[0];
    }

    // Check if the first element is a peak
    if (arr[0] >= arr[1]) {
        return arr[0];
    }

    // Traverse the array to find the first peak
    for (int j = 1; j < N - 1; j++) {
        if (arr[j] > arr[j - 1] && arr[j] > arr[j + 1]) {
            return arr[j];
        }
    }

    // Check if the last element is a peak
    if (arr[N - 1] > arr[N - 2]) {
        return arr[N - 1];
    }

    // Return -1 if no peak is found
    return -1;
}

int main() {
    int N;

    scanf("%d", &N);


    int arr[N]; // Declare array dynamically
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); // Input array elements
    }

    // Call the function to find the first peak
    int peak = first_peak(arr, N);

    // Check result and print appropriate output
    if (peak != -1) {
        printf("First peak element: %d\n", peak);
    } else {
        printf("-1\n"); // No peak found
    }

    return 0;
}
