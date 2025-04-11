// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }

    if(arr[0]>arr[1] && arr[1]>arr[2] && arr[2]>arr[3]){
        printf("%d", arr[0]);
    }
    else if(arr[1]>arr[0] && arr[0]>arr[2] && arr[2]>arr[3]){
        printf("%d", arr[1]);
    }

}