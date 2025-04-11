#include<stdio.h>
int frequency(int arr[], int N){
    
    for(int i=0;i<N-1;i++){
        int count=1;
        if(arr[i]==-1){
            continue;
        }
        for(int j=i+1;j<N-1;i++){
            if(arr[i]==arr[j]){
                count+=1;
                arr[j]= -1;
            }
        }
        printf("%d %d", arr[i], count);
    }
}
int main(){
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }
    frequency(arr,N);

    return 0;


}