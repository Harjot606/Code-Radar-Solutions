#include<stdio.h>
int sorted_arr(int arr[], int N){
    for(int i=0;i<=N-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int N;
    int arr[];
    for(j=0;j<=N;j++){
        scanf("%d", &arr[]);
    }

    if(sorted_arr){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}