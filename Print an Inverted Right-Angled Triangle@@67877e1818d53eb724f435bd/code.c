#include<stdio.h>
int main(){
    int a;
    int i,j;
    scanf("%d", &a);


    for(i=a;i>=1;i--){
        for(j=1;j<=i;i++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
