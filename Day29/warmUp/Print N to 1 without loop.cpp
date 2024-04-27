// Print N to 1 without loop


  void printNos(int N) {
        // code here
        if(N==0)return ;
        
        cout<<N<<" ";
        printNos( N-1);
    }