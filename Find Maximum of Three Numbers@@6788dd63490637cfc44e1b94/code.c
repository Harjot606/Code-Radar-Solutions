// Your code here...
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if (a>b && b>c){
        printf("%d",a);
    }
    else if(b>c && c>a){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }
}