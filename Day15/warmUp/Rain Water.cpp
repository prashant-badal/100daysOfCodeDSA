// Trapping Rain Water
    public:
    long long trappingWater(int arr[], int n){
        
      
          long long  res=0;
          
       int lMax[n], rMax[n];
      
    lMax[0]=arr[0];
      
      
rMax[n-1]=arr[n-1];
         
      for(int i=1;i<n;i++){
          lMax[i]=max(arr[i],lMax[i-1]);
      }
      
      for(int i=n-2;i>=0;i--){
          rMax[i]=max(arr[i],rMax[i+1]);
         
      }
        for(int i=0;i<n;i++){
          res+=(min(rMax[i], lMax[i]))-arr[i];
      }
      return res;
        // code here
      
        // code here
    }