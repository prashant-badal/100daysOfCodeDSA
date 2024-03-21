    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here int 
        long windowSum=0;
        for(int i=0;i<K;i++){
            windowSum+=Arr[i];
        }
           long res=windowSum;
         for(int i=K;i<N;i++){
        windowSum=    windowSum +Arr[i]-Arr[i-K];
            res=max(windowSum,res);
        }
        return res;
    }
};