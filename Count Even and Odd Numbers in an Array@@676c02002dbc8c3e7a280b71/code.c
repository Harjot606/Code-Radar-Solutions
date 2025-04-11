#include<stdio.h>
int odd_even(int arr[], int N){
    int odd=0;
    int even=0;
    for(i=0;i<N;i+++){
        if(arr[i]%2==0){
            even=even+1;
        }
        else{
            odd=odd+1;
        }
    }
}
int main(){
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }
    printf("%d %d", even, odd);

    return 0;

}