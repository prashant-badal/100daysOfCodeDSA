// Missing number in array


   int missingNumber(vector<int>& array, int n) {
        
        
        // Your code goes here
        int sum=0,sum1=0;
        for(int i=1;i<=n;i++){
          sum+=i;
        }
        
             for(auto ele:array){
            sum1+=ele;
        }
        return sum-sum1;
        
    }