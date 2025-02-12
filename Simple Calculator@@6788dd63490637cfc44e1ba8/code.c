// Your code here...
#include<stdio.h>
int main(){
    int a;
    int b;
    char op;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf(" %c",&op);

    if(op=='+'){
        printf("%d", a+b);
    }
    else if(op=='-'){
        printf("%d", a-b);

    }
    else if(op=='/'){
        printf("%d", a/b);
    }
    else if(op=='*'){
        printf("%d", a*b);
}

return 0;
}