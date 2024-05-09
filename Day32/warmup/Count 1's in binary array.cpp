// Count 1's in binary array


    int countOnes(int arr[], int N)
    {
        
      int s=0,e=N-1;
    int ans=-1;
    
        while(s<=e){
            int m=(e-s)/2+s;
            
            if(arr[m] ==1){
              ans=m;
              s=m+1;
            }
          
        else
            e=m-1;
        }
        
        return ans +1;
        
    }