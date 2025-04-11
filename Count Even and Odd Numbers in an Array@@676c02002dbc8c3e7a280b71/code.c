#include<stdio.h>
int even_int(int arr[], int N){

    int even=0;
    for(int i=0;i<N;i++){
        if(arr[i]%2==0){
            even=even+1;
        }
    }
    return even;
}
int odd_int(int arr[], int N){

    int odd=0;
    for(int i=0;i<N;i++){
        if(arr[i]%2!=0){
            odd=odd+1;
        }
    }
    return odd;
}
int main(){
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }
    int result= even_int(arr,N);
    int result1= odd_int(arr,N);
    printf("%d %d", result, result1);


    return 0;

}