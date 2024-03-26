// Maximum occured integer

    int maxOccured(int L[], int R[], int n, int maxx){
    
        // Your code here
        
        int f[maxx+2]={0};
        for(int i=0 ; i<n ; i++)
        {
            f[L[i]]++;
            f[R[i]+1]--;
        }
        int mx=f[0];
        int res=0;
        for(int i=1 ; i<maxx+2 ; i++)
        {
            f[i]+=f[i-1];
            if(f[i]>mx)
            {
                mx=f[i];
                res=i;
            }
        }
        return res;
    }