// Wave Array

    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        for(int i=1;i<n;i=i+2){
            int temp=arr[i-1];
             arr[i-1]=arr[i];
            arr[i]=temp;
        }
        
        // Your code here
        
    }