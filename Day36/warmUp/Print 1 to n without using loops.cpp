// Print 1 to n without using loops

    void printTillN(int N)
    {
       if(N==0)return;
       
       printTillN(N-1);
       cout<<N << " ";
       
        
    }