
#include<stdio.h>
int main(){
    int n;
    int i,j;
    scanf("%d", &n);

    for(i=n;i>=1;i--){
        for(j=1;j<=n;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}