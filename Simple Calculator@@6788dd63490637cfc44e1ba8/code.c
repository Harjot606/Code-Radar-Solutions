#include<stdio.h>
int main(){
    int a,b;
    char o;

    scanf("%d %d %c", &a, &b, &o);  // Corrected scanf syntax

    if(o == '+'){
        int op = a + b;
        printf("%d", op);
    }
    else if(o == '-'){
        printf("%d", a-b);
    }
    else if(o == '/'){
        printf("%d", a/b);
    }
    else if(o == '*'){
        printf("%d", a*b);
    }

    return 0;
}
