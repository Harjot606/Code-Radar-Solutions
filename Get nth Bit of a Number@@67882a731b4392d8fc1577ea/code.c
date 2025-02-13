// Your code here...
#include<stdio.h>
int main(){
    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);

    int mask = 1<<b;

    if(a&mask){
        printf("%The %dth bit is set (1).\n",b);
    }
    else{
        printf("The %dth bit is set (1).\n",b);
    }

    return 0;
}