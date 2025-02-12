#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    if(a<=1){
        printf("Not Prime");
    }
    else{
        IsPrime = 1;
        for(i=2;i<num;i++){
            if(a%i==0){
                IsPrime = 0;
                break;
            }

        }

        }

        if(IsPrime){
            printf("Prime");
        }
        else{
            print("Not Prime");
        }
    return 0;
    }

