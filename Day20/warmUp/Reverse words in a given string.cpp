// Reverse words in a given string

  string reverseWords(string S) 
    { 
        
        
        
        int n=S.length();
        int start=0;
        for(int ends=0;ends <n;ends++){
            if(S[ends]=='.'){
                reverse(S.begin()+start,S.begin()+ends);
                start=ends+1;
            }
        }
        reverse(S.begin()+start,S.begin()+n);
         reverse(S.begin(),S.end());
         return S;
        // code here 
    } 