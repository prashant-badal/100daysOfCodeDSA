// Number of occurrence

		
	int firstIndex(int arr[], int n, int x)	{
	     
             int s=0,e=n-1,m=(s+e)/2;
          int res=-1;
          while(s<=e){
            if(arr[m]==x){
               
                res=m;
                 e=m-1;
               
                
            }
            else if(arr[m]<x){
                
                s=m+1;
            }
            else{
                e=m-1;
            }
           m=(s+e)/2;
            
        }
	        return res;
	};
		int secondIndex(int arr[], int n, int x)	{
	    int s=0,e=n-1,m=(s+e)/2;
            int res=-1;
            
          while(s<=e){
            if(arr[m]==x){
               
                res=m;
                 s=m+1;
               
                
            }
            else if(arr[m]<x){
                
                s=m+1;
            }
            else{
                e=m-1;
            }
           m=(s+e)/2;
            
        }
	        return res;
	};
		
		
		
	int count(int arr[], int n, int x) {
	         int one=firstIndex(arr,n,x);
         int two=secondIndex(arr,n ,x);
         
         if(one== -1){
             return 0;
         }
         
         else{
             return (two-one +1);
         }
	   
	}