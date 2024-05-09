// /Left Index
int leftIndex(int N, int arr[], int X){
    
    // Your code here
    int s=0,e=N-1;
    int ans=-1;
    
        while(s<=e){
            int m=(e-s)/2+s;
            
            if(arr[m] ==X){
              ans=m;
              e=m-1;
            }
            else if(arr[m] <X)
            s=m+1;
        
        else
            e=m-1;
        }
        
        return ans;
    
}