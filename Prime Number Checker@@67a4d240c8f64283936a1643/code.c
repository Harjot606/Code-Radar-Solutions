int isPrime(int num){
    int IsPrime = 1;
    for(int i=0;i<num;i++){
        if(i%num==0){
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