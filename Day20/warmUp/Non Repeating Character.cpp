// Non Repeating Character

char nonrepeatingCharacter(string S)
    {
       //Your code here
       int temp[256]={0};
       for(int i=0;i<S.length();i++){
           temp[S[i]]++;
       }
        for(int i=0;i<S.length();i++){
          if( temp[S[i]]==1) {
              return S[i];
          }
       }
       return '$';
    }

