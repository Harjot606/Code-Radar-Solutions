#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int i,j,k;

    for(i=1; i<=N ; i++){

        for(j=N ; j>=1 ; j--){
            printf(" ");
            }
        for(k=1 ; k<= (i*2)-1 ; k++){
            printf("*");
        }
        printf("\n");

    }
    return 0;
}