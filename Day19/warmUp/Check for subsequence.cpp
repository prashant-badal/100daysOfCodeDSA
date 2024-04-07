// Check for subsequence


  bool isSubSequence(string A, string B) 
    {
        // code here
        
        if(B.length()<A.length())return 0;
        
        int j=0;
        for(int i=0;i<B.length()&& j<A.length();i++){
            if(B[i]==A[j]){
                j++; 
            }
        }
        if(j==A.length()){
            return 1;
        }
        else{
            return 0;
        }
           
       
    }