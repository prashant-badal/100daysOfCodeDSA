// Square root of a number

  long long int floorSqrt(long long int x) 
    {
        // Your code goes here 
        int ans=-1;
       long long s=1,e=x;
       while(s<=e){
           long long  m= (e-s)/2+s;
           if(m*m ==x)
           return m;
           
           else if(m*m <x ) {
               ans=m;
               s=m+1;
           }
           else
           e=m-1;
       }
       return ans;
       
    }