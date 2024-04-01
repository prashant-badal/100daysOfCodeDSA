// Smallest Positive missing number
  int ptr=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                ptr=1;
                break;
            }
        }
        
        if(ptr==0)return 1;
        
        for(int i=0;i<n;i++){
            if(arr[i]<=1 || arr[i]>n)
            arr[i]=1;
        }
        
         for(int i=0;i<n;i++){
             arr[(arr[i]-1)%n]+=n;
         }
         
          for(int i=0;i<n;i++){
              if(arr[i]<=n)
              return i+1;
          }
          return n+1;
              