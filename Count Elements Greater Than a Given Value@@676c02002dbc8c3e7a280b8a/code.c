// Your code here...
#include<stdio.h>
int count_int(int arr[], int N,int K){
    int count=0;
    for(int i=0;i<N;i++){
        if(arr[i]>K){
            count=count+1;
        }
    }
    return count;
}

int main(){
    int N;
    int K;
    scanf("%d %d",&N,&K);
    int arr[N];

    
    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }

    int result= count_int(arr,N,K);
    printf("%d",result);

    return 0;
}