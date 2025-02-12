// Your code here...

#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    int A = a+b;
    int B = a+c;
    int C = b+c;

    if(A>c && B>b && C>a){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }

    return 0;
}