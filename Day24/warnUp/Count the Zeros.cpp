// Count the Zeros
// 


    int first(int arr[], int n){
        int res=-1;
        int s=0,e=n-1,m=(s+e)/2;
        while(s<=e){
            if(arr[m]==0){
                res=m;
                e=e-1;
            }
            else if(arr[m]>0){
                s=m+1;
            }
        m=(s+e)/2;
        }
        return res;
    }

    int countZeroes(int arr[], int n) {
        int firstIndex=first(arr,n);
        if(firstIndex==-1)
        return 0;
        else{
            return (n-firstIndex);
        }
        
        // code here
    }