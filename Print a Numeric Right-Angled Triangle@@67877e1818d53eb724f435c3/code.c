// Your code here...
#include<stdio.h>
int main(){
    int a;
    int i;

    scanf("%d",&a);

    for(i=0;i<=a;i++){
        for(i=0;i>=a;i--);
        printf("*");
        printf("\n");
    }
    return 0;
}
