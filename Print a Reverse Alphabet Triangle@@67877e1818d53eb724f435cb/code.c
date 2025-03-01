// Your code here...
#include<stdio.h>
int main(){
    int n;
    int i,j;
    char letter;

    scanf("%d", &n);

    for(i=1;i<=n;i++){
        letter = 'A';
        for(j=i;j>=1;j--){
            printf("%c", letter);
            letter++;
        }
        printf("\n");
    }
    return 0;
}