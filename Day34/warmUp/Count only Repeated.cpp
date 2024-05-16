// Count only Repeated

 pair<long, long> findRepeating(long *arr, int n){
        
        if(n-(arr[n-1]-arr[0])==1)
        return {-1,-1};
        
        int freq=(n-(arr[n-1]-arr[0]));
        
        int s=0,e=n-1;
        int ans=-1;
        
        while(s<e){
            int m=(e-s)/2+s;
            
            if(arr[m]==arr[0]+m){
                s=m+1;
                ans=m;
            }
            
            
            else{
                e=m;
            }
        }
        
        
        return {arr[ans],freq};
        //code here
