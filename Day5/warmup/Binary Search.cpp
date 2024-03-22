// Binary Search

 public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int s=0,e=n-1;
        int mid=(s+e)/2;
        
        while(s<=e){
            if(arr[mid]==k){
                return mid;
            }
           else if(arr[mid]>k){
            e=mid-1;
           } 
           else{
               s=mid+1;
           }
           mid=(s+e)/2;
        }
        
        return -1;
        
    }