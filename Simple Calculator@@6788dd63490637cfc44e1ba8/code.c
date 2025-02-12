// Your code here...
#include<stdio.h>
int main(){
    int a,b;
    char o;

    scanf("%d %d %c", &a, &b, &o);

    if(o == '+'){
        int op = a + b;
        printf("%d", op);
    }
    else if(op=='-'){
        printf("%d", a-b);

    }
    else if(op=='/'){
        if(b==0){
            printf("Error");
        }
        else{
        printf("%d", a/b);}
    }
    else if(op=='*'){
        printf("%d", a*b);
}

return 0;
}