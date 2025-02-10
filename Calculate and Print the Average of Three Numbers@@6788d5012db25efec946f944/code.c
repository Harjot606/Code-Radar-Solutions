#include <stdio.h>
int main(){
    int a;
    int b;
    int c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    float sum= a+b+c;
    float average = sum/3;

    printf("Average: %.2f", average);
    return 0;
}