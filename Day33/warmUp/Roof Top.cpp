// Roof Top

    int maxStep(int A[], int N)
    {
       //Your code here
       int ans=0,count=0;
       
       for (int i=1;i<N;i++){
           if(A[i]>A[i-1]){
           count++;
           ans=max(count,ans);
       }
       else{
           count=0;
           
       }
       }
       return ans;
    }
