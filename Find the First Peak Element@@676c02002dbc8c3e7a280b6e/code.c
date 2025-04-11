#include<stdio.h>
int first_peak(int arr[], int N){
    if(N==1)
        return arr[0];
    
    else if(arr[0]>=arr[1])
        return arr[0];
    
    for(int j=1;j<N-1;j++){
        if(arr[j]>arr[j-1] && arr[j]>arr[j+1]){
            return arr[j];
        }
    }
    if(arr[N-1]>arr[N-2]){
        return arr[N-1];
        }
    return -1;
}
int main(){
    int N;
    scanf("%d", &N);
     int arr[N];
     for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
     }

    int peak = first_peak(arr, N);
    printf("%d", peak);

    return 0;
}
