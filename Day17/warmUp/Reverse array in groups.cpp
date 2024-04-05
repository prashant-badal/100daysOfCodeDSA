// Reverse array in groups

    
    void reverse(vector<long long>& arr, int s, int e){
        while(s<e){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    }
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        for(int i=0;i<n;i=i+k){
            
            int p=i+k-1;
            if(p>=n-1){p=n-1;}
        reverse(arr,i,p);
        }
    
    }