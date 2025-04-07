int isPrime(int num){
    int IsPrime = 1;
    for(int i=2;i<num;i++){
        if(num%i==0){
            IsPrime = 0;
            break;
        }
     
        }

        if(IsPrime){
          return 1;
        }
        else{
            return 0;
        }
    }