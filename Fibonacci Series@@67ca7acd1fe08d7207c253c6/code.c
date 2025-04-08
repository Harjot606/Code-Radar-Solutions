// Your code here
int fibonacciSeries(int n){
    int t1=0,t2=1,nextterm;
    for(int i=1;i<=n;i++){
        nextterm=t1+t2;
        printf("%d ", nextterm);
        t1=t2;
        t2=nextterm;
    
    }
    printf("\n");

}