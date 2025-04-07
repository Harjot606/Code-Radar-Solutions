int isPrime(int num){
    int IsPrime = 1;
    for(int i=2;i<num-1;i++){
        if(num%i==0){
            IsPrime = 0;
            break;
        }
     
        }

        if(IsPrime){
            printf("1");
        }
        else{
            printf("0");
        }
    }