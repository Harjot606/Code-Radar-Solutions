#include <stdio.h>

int first_peak(int arr[], int N) {
    // Edge case: If there is only one element, return it as the peak
    if (N == 1)
        return arr[0];
    
    // If the first element is greater than or equal to the second, return it as the peak
    if (arr[0] >= arr[1])
        return arr[0];
    
    // Loop through the middle elements to check for peak
    for (int j = 1; j < N - 1; j++) {
        if (arr[j] > arr[j - 1] && arr[j] > arr[j + 1]) {
            return arr[j];
        }
    }

    // If the last element is greater than or equal to the second last, return it as the peak
    if (arr[N - 1] > arr[N - 2]) {
        return arr[N - 1];
    }

    // If no peak found, return -1
    return -1;
}

int main() {
    int N;
    scanf("%d", &N);

    // If N is less than 1, it's an invalid size, so return early
    if (N <= 0) {
        return 0;
    }

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int peak = first_peak(arr, N);
    printf("%d\n", peak);
 
    return 0;
}
