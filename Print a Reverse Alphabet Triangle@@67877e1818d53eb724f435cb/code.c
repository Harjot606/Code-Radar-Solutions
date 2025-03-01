// Your code here...
#include<stdio.h>
int main(){
    int n;
    int i,j;
    char letter;

    scanf("%d", &n);

    for(i=n;i>=1;i--){
        letter = 'A';
        for(j=1;j<=i;j++){
            printf("%c ", letter);
            letter++;
        }
        printf("\n");
    }
    return 0;
}