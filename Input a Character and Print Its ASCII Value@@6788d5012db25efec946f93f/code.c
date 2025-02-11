#include <stdio.h>
int main(){
    char ch;
    scanf("%s",&ch);

    if (ch == ' '){
        printf("ASCII Value: 32");
    }
    else{
    printf("ASCII Value: %d\n" ,ch);
    }
    return 0;
}