// Your code here
int fibonacciSeries(int n){
    int t1=0,t2=1,nextterm;
    printf("%d %d", t1,t2);
    for(int i=3;i<=n;i++){
        nextterm=t1+t2;
        printf("%d", nextterm);
        t1=t2;
        t2=nextterm;
    
    }
    printf("\n");

}