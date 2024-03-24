// Find Indexes of a subarray with given sum

        long long sum=0;
     int i=0;
     int j=0;
     while(i<n && j<n){
        sum+=arr[j];
        while(sum>s && i<j){
            sum-=arr[i];
            i++;
        }
        if(sum==s){
        return {i+1,j+1};
        }
        j++;
     }
     return {-1};
        
    }