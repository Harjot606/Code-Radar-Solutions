// Your code here...
#include<stdio.h>
int main(){
    int n;
    int number;
    scanf("%d", &number);
    scanf("%d", &n);

    int mask = 1 << n;
    number = number^mask;
    printf("%d", number);
    return 0;
}