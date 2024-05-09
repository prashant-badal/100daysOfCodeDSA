// Count More than n/k Occurences

    int countOccurence(int arr[], int n, int k) {
        int count =0;
        unordered_map<int,int>m;
        
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        
        for(auto x: m ){
            if(x.second >n/k)
            count++;
        }
        // Your code here
        return count;
    }