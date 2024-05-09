// Majority Element

 int mahority(int a[],int size){
          int temp=a[0];
        int count=1;
        int index=0;
        
       for(int i=1;i<size;i++){
           if(temp ==a[i])
           count++;
           
           else{
               count--;
           }
           
           if(count==0){
               temp=a[++i];
               index=i;
               count=1;
           }
       }
       
       if(count >0){
         return index;   
       }
       else 
       return -1;
    }
    
    
    
    int majorityElement(int a[], int size)
    {
      int indexValue= mahority(a,size);
      if(indexValue == -1){
          return -1;
      }
      
      int counting =0;
      
      for(int i =0;i<size;i++){
          if(a[indexValue] ==a[i])
          counting++;
      }
      
      if(counting >size/2)
      return a[indexValue];
      
      else{
          return -1;
      }
        
    }