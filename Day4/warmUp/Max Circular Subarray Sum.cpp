   int normalMax(int arr[],int n){
        int curr=0;
        int res=arr[0];
        for(int i=0;i<n;i++){
            curr+=arr[i];
            res=max(res,curr);
            
            if(curr <0){
                curr=0;
            }
        }
        return res;
    };
    
  
    int circularSubarraySum(int arr[], int num){
        
        // your code here
        int maxNormal=normalMax(arr,num);
        if(maxNormal <0){
            return maxNormal;
        }
        
        int curr=0;
         for(int i=0;i<num;i++){
            curr+=arr[i];
            arr[i]=-arr[i];
         }
        
        
        int circularSum=curr + normalMax(arr,num);
        int res=max(circularSum,maxNormal);
        return res;
    }