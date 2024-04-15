// Search in a Rotated Array
int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
       
        
        while(l<=h){
            int m=(l+h)/2;
        if(A[m]==key) 
        return m;
        
        
        if(A[m]>=A[l]){
            if(A[l]<=key && A[m]>key){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
          else{
            if(A[m]<key && A[h]>=key){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        }
        return -1;
    }