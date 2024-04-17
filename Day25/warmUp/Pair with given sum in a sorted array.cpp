// Pair with given sum in a sorted array


  int Countpair(int arr[], int n, int sum){
        
        // Complete the function
        int s=0,e=n-1;
        int count=0;
        
  
        
        while(s<e){
            int currSum=arr[s]+arr[e];
            if(currSum==sum){
              
                s++;
                e--;
                count++;
            }
            
            else if(currSum >sum){
                e--;
                
            }
            else{
                s++;
            }
        }
        if(count==0)return -1;
    return count;
        
    }