#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);

    if(a<=1){
        printf("Not Prime");
    }
    else{
        int IsPrime = 1;
        for(i=2;i<a;i++){
            if(a%i==0){
                IsPrime = 0;
                break;
            }

        }

        

        if(IsPrime){
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
    return 0;
    }
}

