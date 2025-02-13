// Your code here...
#include<stdio.h>
int main(){
    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);

    int mask = 1<<b;

    if(a&mask){
        printf("%d",b);
    }
    else{
        printf("%d",b);
    }

    return 0;
}