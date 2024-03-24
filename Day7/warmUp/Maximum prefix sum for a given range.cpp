// Maximum prefix sum for a given range


        
        int MaxPrefixSum(int arr[],int l,int r){
            int res=arr[l];
            int curr=arr[l];
            for(int i=l+1;i<=r;i++){
                curr+=arr[i];
                res=max(res,curr);
            }
            return res;
        }
  
    vector<int> maxPrefixes(int a[], int L[], int R[], int N, int Q) {
    vector <int>v;
    
        for(int i=0;i<Q;i++){
          int bad=  MaxPrefixSum(a,L[i],R[i]);
          v.push_back(bad);
        }
         return v;