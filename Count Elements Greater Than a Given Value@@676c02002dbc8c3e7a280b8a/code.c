// Your code here...
#include<stdio.h>
int count_int(int arr[], int N,int K){
    count=0;
    for(int i=0;i<N;i++){
        if(arr[i]>k){
            count=count+1;
        }
    }
    return count;
}

int main(){
    int N;
    int K;
    int arr[N];

    scanf("%d %d",&N,&K);
    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }

    int result= count_int(arr,N);
    printf("%d",result);

    return 0;
}