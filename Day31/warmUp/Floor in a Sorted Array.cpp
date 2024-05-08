
// Floor in a Sorted Array

    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        if(v[0]>x )return -1;
        
        long long s=0,e=n-1 ,result=-1;
        
        
        while(s<=e){
            int m=(e-s)/2 +s;
            
        
                
                if(v[m]==x)
                return m;
         
           
            
            else if(v[m]<x){
            result=m;
                s=m+1;
            }
            else{
                e=m-1;
            }
           
        }
        
        return result;
        
    }