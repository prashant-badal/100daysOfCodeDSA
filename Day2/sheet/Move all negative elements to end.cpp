// Move all negative elements to end


   void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int> v;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                v.push_back(arr[i]);
            }
        }
         for(int i=0;i<n;i++){
            if(arr[i]<0){
                v.push_back(arr[i]);
            }
        }
            for(int i=0;i<n;i++){
           arr[i]=v[i];
            
        }
    }