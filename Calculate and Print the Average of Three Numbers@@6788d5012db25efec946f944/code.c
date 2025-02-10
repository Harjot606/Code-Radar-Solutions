#include <stdio.h>
int main(){
    int a;
    int b;
    int c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int sum= a+b+c;
    int average = sum/3;

    printf("Average: %.2f", average);
    return 0;
}