    bool isAnagram(string a, string b){
        
        // Your code here
        
        if(a.length()!=b.length())return false;
        
        int temp[26]={0};
        
        for(int i=0;i<a.length();i++){
            temp[a[i]-'a']++;
            temp[b[i]-'a']--;
            
        }
           for(int i=0;i<26;i++){
           if(temp[i]!=0){
            return false;
           }
            
        }
        return true;
    }