// Count the characters


       int getCount (string S, int N)
        {
            //code here.
            int temp[26]={0};
            
            temp[S[0]-'a']=1;
            
            for(int i=1;i<S.length();i++){
                if(S[i]!=S[i-1]){
                    temp[S[i] -'a']++;
                }
            }
            
            int count =0;
            
            for(int i=0;i<26;i++){
                if(temp[i]==N){
                    count++;
                }
            }
            return count;
            
            
        }