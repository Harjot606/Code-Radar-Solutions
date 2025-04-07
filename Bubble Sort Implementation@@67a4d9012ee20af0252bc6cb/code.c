void bubbleSort(int arr[],int n){
    for(int b=0;b<n;b++){

    for(int k=0;k<n-1;k++){
    if(arr[k]>arr[k+1]){
        int temp =arr[k];
        arr[k]=arr[k+1];
        arr[k+1]= temp;   
    }
}
}
}

int printArray(int arr[],int n){
    for(int m=0;m<n;m++){
        printf("%d ", arr[m]);
    }
}