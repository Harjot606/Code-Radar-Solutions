// Your code here
int fibonacciSeries(int n){
   if(n==1){
    printf("0");
   }
   else if(n==2){
    printf("0 1");
   }
   else{
    for(i=2;i<n;i++){
        int fib[i]=fib[i-1]+fib[i-2];
        printf("%d\t", fib[i]);
    }
    printf("\n");
    return 0;
   }

}