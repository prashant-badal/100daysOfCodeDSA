// Sum Of Digits

int sumOfDigits(int N){
        if(N==0)return 0;
        
        return sumOfDigits( N/10) + N%10;
        //code here
    }