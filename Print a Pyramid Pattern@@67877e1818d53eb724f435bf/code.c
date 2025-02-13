// Your code here...
#include<stdio.h>
int main(){
    int a;
    int i,j;

    scanf("%d",&a);

    for(i=1;i<=a;i++){
        for(j=1;j<=(2n-1);j++){
            if(j>=(n-(i-1)) && j<= (n-(i+1))){
                printf("* ");
            }
            else{
                printf(" ");
            }

        }
        printf("\n");
    }

    return 0;
}