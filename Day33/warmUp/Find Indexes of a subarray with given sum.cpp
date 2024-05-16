// Find Indexes of a subarray with given sum

    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        
        long long currSum=0;
        vector<int>v;
        
        int i=0,j=0;
      while(i<n && j<n){
          
          
         currSum+=arr[j];
         
         while(currSum>s && i<j ){
              currSum-=arr[i];
             i++;
         }
         
         if(currSum==s){
             return {i+1,j+1};
         }
         
      j++;
         
        }
        
        return {-1};