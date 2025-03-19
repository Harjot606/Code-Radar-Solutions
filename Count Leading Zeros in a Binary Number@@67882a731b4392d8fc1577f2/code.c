// Your code here...
#include <stdio.h>

int count_leading_zeros(int n) {
    int count = 0;

    if (n == 0) {
        return 32; 
    }

    for (int i = 31; i >= 0; i--) {
        if ((n >> i) & 1) {
            break;
        }
        count++;
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int leading_zeros = count_leading_zeros(n);

    printf("%d\n", leading_zeros);

    return 0;
}
