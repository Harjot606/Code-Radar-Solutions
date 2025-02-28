// Your code here...
#include<stdio.h>
int main(){
    int N,i,j;
    scanf("%d",&N);

    for(i=1;i<=N;i++){
        for(j=i;j<=N-1;j++){
            printf(" ");
        }
        for(j=i;j<=N;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}