// Triplet Sum in Array


bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        for(int i =0;i<n-2;i++){
            
            int s=i+1,e=n-1;
            int modiSum=X-A[i];
            
            while(s<e){
                int sum=A[s]+A[e];
                if(sum ==modiSum)
                return 1;
            
            else if(sum <modiSum)
            s++;
        
        else
            e--;
        
        }
    }
    return 0;
        
    }