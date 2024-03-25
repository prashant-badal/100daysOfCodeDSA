// Who has the majority?


   int count(int arr[], int n, int x){
        int counting=0;
          for(int i=0;i<n ;i++ ){
        if(x==arr[i])
        counting++;
   
    }
  
    return counting;
    };
    
    
    int majorityWins(int arr[], int n, int x, int y) {
        // code here
        int countx=count(arr,n, x);
         int county=count(arr,n ,y);
         
         if(county == countx){
             return (x> y? y:x);
         }
         
         else if(county >countx){
             
             return y;
         }
         else{
             return x;
         }
    }