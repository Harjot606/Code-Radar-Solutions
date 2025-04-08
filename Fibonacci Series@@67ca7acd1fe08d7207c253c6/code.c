// Your code here
int fibonacciSeries(int n){
   if(n==1){
    printf("0");
   }
   else if(n==2){
    printf("0 1");
   }
   else{
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    printf("0 1\t");
    for(int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d", fib[i]);
    }
    printf("\n");
    return 0;
   }

}