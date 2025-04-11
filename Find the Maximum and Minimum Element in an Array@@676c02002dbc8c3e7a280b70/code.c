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
int main(){
    int N;
    scanf("%d",&N);

    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    int maxi= large_small(arr,N);
    printf("%d", maxi);

}