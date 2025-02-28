// Your code here...
#include<stdio.h>
int main(){
    int n;
    int i,j;
    char letter= 'A';
    scanf("%d", &n);

    for(i=1;i<=n; i++){
        for(j=1;j<=i;j++){
            printf("%c", letter);
        }
        printf("\n");
    }
    return 0;
}