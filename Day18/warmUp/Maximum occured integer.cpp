// Maximum occured integer


   //Function to find the maximum occurred integer in all ranges.
    int maxOccured(int L[], int R[], int n, int maxx){
    
        // Your code here
      int temp[maxx+2]={0};
      

    // Increment the frequency for each integer in the given ranges
    for (int i = 0; i < n; ++i) {
       temp[L[i]]++;
       temp[R[i]+1]--;
}
    // Find the integer with the maximum frequency
    int sum=0;
    int mx = temp[0];
    int res = 0;
    
    for(int i=0;i<maxx+1;i++){
        sum+=temp[i];
        temp[i]=sum; 
        
        if(temp[i]>mx){
            mx=temp[i];
            res=i;
        }
    }
    
    return res;
    
    }