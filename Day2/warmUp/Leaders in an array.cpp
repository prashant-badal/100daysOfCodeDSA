class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        
        // Code here
        int temp=a[n-1];
        vector<int> v;
        v.push_back(temp);
        
        for(int i=n-2;i>=0;i--){
            if(a[i]>=temp){
                
                v.push_back(a[i]);
            temp=max(temp,a[i]);
            
            }
            
        }
        reverse(v.begin(),v.end());
        return v;
    }
};