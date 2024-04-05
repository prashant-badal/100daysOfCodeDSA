// Max Circular Subarray Sum
      int SubarraySum(int arr[], int n){
           int sum=0;
          int res=arr[0];
           
           for(int i=0;i<n;i++){
               sum+=arr[i];
               res=max(sum,res);
               if(sum<0){
                   sum=0; } }
           return res; };
       
         int SubSum(int arr[], int n){
           int sum=0;
          int res=INT_MAX;
           
           for(int i=0;i<n;i++){
               sum+=arr[i];
               res=min(sum,res);
               
               if(sum>0){
                   sum=0;} }
           return res;
       };
    int circularSubarraySum(int arr[], int num){
        
         int maxSubArray= SubarraySum(arr,num);
         if(maxSubArray<0)return maxSubArray;
        
        int total=0;
        for(int i=0;i<num;i++){
            total+=arr[i];}
        int minSubArray=SubSum(arr,num);
        int circularSum =max(total-minSubArray,maxSubArray);

        return circularSum;
       
    }