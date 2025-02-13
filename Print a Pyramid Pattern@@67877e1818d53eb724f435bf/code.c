// Your code here...
#include<stdio.h>
int main(){
    int a;
    int i,j;

    scanf("%d",&a);

    for(i=1;i<=a;i++){
        for(j=1;j<=(2*a-1);j++){
            if(j>=(a-(i-1)) && j<= (a-(i+1))){
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