#include<stdio.h>
int large_small(int arr[], int N){
    int max=arr[0];
    for(int i=1;i<N;i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
    return max; 
}
int small_large(int arr[], int N){
    int min=arr[0];
    for(i=1;i<N;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min; 
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];

    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }

    int maxi= large_small(arr,N);
    int mini= small_large(arr,N);
    printf("%d %d",mini, maxi);

    return 0;

}