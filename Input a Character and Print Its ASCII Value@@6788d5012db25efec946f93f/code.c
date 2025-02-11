#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);

    if (ch == ' '){
        printf("ASCII Value: 32");
    }
    else{
    printf("ASCII Value: %d\n" ,ch);
    }
    return 0;
}