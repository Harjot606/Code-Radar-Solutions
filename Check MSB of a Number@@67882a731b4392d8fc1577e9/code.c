// Your code here...
#include<stdio.h>
int main()
{
    int a;
    int msb;
    scanf("%d", &a);
    
    int msb = 1<<(BITS-1);
    if (a&msb){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;


}