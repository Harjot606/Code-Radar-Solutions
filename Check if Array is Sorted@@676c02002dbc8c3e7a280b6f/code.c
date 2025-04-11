#include<stdio.h>
int sorted_arr(int arr[], int N){
    for(int i=0;i<=N-1;i++){
        if(arr[i]>arr[i+1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int N;
    scanf("%d", &N);
    int arr[];
    for(int j=0;j<N;j++){
        scanf("%d", &arr[j]);
    }

    if(sorted_arr){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}