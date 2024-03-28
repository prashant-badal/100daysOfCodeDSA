  void recursion(int temp,vector<int> &ans){
        
        if(temp <= 0){
            ans.push_back(temp);
            return;
        }
        
        ans.push_back(temp);
        
        recursion(temp-5,ans);
        
        ans.push_back(temp);
        
    }
    vector<int> pattern(int N){
        // code here
        vector<int> ans;
        recursion(N,ans);
        return ans;
    }
    