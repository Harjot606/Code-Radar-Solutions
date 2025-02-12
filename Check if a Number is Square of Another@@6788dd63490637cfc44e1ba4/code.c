// Your code here...
#include<stdio.h>
int main(){
    int a;
    int b;

    scanf("%d",&a);
    scanf("%d",&b);

    int sqr = b*b;

    if(a==sqr){
        printf("Yes");
    }
    else{
        printf("No");
    }

return 0;
}