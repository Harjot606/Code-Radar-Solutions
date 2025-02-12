// Your code here...

#include<stdio.h>
int main(){
    int cost;
    int sell;
    scanf("%d", &cost);
    scanf("%d", &sell);

    if(sell>cost){
        printf("Profit");
    }
    else if(cost>sell){
        printf("Loss");
    }
    else if(cost==sell){
        printf("No Profit No Loss");
    }
}