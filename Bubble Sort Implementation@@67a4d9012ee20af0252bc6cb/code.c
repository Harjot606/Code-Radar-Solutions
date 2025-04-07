void bubbleSort(arr,n){
    for(int b=0;b<n-1;b++){

    for(int k=0;k<n-1-b;k++){
    if(arr[k]>arr[k+1]){
        int temp =arr[k];
        arr[k]=arr[k+1];
        arr[k+1]= temp;   
    }
}
}
}

int printArray{
    for(int m=0;m<n-1;m++){
        printf("%d", arr[m]);
    }
}