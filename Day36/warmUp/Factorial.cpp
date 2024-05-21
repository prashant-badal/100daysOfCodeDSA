   long long int factorial(int N){
        //code here
     long long p=1;
     for(int i=1;i<=N;i++){
        p*=i;
     }
     return p;
    }